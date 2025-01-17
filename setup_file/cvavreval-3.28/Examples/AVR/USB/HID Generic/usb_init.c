/*******************************************************
USB library initialization created by the
CodeWizardAVR V3.11 Advanced
Automatic Program Generator
� Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project: USB Generic HID Example
*******************************************************/

#include "usb_init.h"

// USB device descriptors

flash USB_DEVICE_DESCRIPTOR_t usb_device_descriptor =
{
.bLength=sizeof(USB_DEVICE_DESCRIPTOR_t),
.bDescriptorType=USB_DESCRIPTOR_TYPE_DEVICE,
.bcdUSB=USB_SPEC,
.bDeviceClass=USB_CLASS_NONE,
.bDeviceSubClass=USB_SUBCLASS_NONE,
.bDeviceProtocol=USB_PROTOCOL_NONE,
.bMaxPacketSize0=USB_ENDPOINT0_SIZE,
.idVendor=USB_VENDOR_ID,
.idProduct=USB_PRODUCT_ID,
.bcdDevice=USB_DEVICE_RELEASE,
.iManufacturer=1,
.iProduct=2,
.iSerialNumber=3,
.bNumConfigurations=1
};

// HID Generic report descriptor for interface 0
flash unsigned char hid_generic_report_descriptor0[]=
{
HID_RD_USAGE_PAGE(16,USB_INTERFACE0_VENDOR_PAGE_NUMBER),
HID_RD_USAGE(16,USB_INTERFACE0_COLLECTION_USAGE),
HID_RD_COLLECTION(8,1),
HID_RD_REPORT_SIZE(8,8),
HID_RD_LOGICAL_MIN(8,0),
HID_RD_LOGICAL_MAX(16,0xFF),
HID_RD_REPORT_COUNT(8,USB_INTERFACE0_IN_EP_SIZE),
HID_RD_USAGE(8,1), // Data IN usage
HID_RD_INPUT(8,HID_RD_DATA_F | HID_RD_VARIABLE_F | HID_RD_ABSOLUTE_F),
HID_RD_REPORT_COUNT(8,USB_INTERFACE0_OUT_EP_SIZE),
HID_RD_USAGE(8,2), // Data OUT usage
HID_RD_OUTPUT(8,HID_RD_DATA_F | HID_RD_VARIABLE_F | HID_RD_ABSOLUTE_F | HID_RD_NON_VOLATILE_F),
HID_RD_END_COLLECTION(0)
};

// Strings descriptors
flash unsigned short usb_string0[]=
{
2+sizeof(short)+ // bLength
(USB_DESCRIPTOR_TYPE_STRING<<8), // bDescriptorType
USB_LANG_ID_US_ENGLISH // wLangID
};

flash unsigned short usb_string1[]=
{
2+USB_STR_MANUFACTURER_CHARS*2+ // bLength
(USB_DESCRIPTOR_TYPE_STRING<<8), // bDescriptorType
USB_STR_MANUFACTURER // bString
};

flash unsigned short usb_string2[]=
{
2+USB_STR_PRODUCT_CHARS*2+ // bLength
(USB_DESCRIPTOR_TYPE_STRING<<8), // bDescriptorType
USB_STR_PRODUCT // bString
};

flash unsigned short usb_string3[]=
{
2+USB_STR_SERIAL_NUMBER_CHARS*2+ // bLength
(USB_DESCRIPTOR_TYPE_STRING<<8), // bDescriptorType
USB_STR_SERIAL_NUMBER // bString
};

// USB configuration descriptor
flash struct
{
// Configuration Descriptor
USB_CONFIG_DESCRIPTOR_t config_descriptor;

// Interface 0 - HID Generic
USB_INTERFACE_DESCRIPTOR_t interface0_descriptor;
USB_HID_INTERFACE_DESCRIPTOR_t interface0_hid_descriptor;
USB_ENDPOINT_DESCRIPTOR_t interface0_in_endpoint_descriptor;
USB_ENDPOINT_DESCRIPTOR_t interface0_out_endpoint_descriptor;
} usb_config_descriptor=
{
// Configuration Descriptor
{
.bLength=sizeof(USB_CONFIG_DESCRIPTOR_t),
.bDescriptorType=USB_DESCRIPTOR_TYPE_CONFIGURATION,
.wTotalLength=sizeof(usb_config_descriptor),
.bNumInterfaces=1,
.bConfigurationValue=1,
.iConfiguration=USB_STRING_NONE,
.bmAttributes=USB_ATTR_COMPAT1 | USB_ATTR_SELF_POWERED,
.bMaxPower=100/2
},

// Interface 0 - HID Generic
// Descriptor
{
.bLength=sizeof(USB_INTERFACE_DESCRIPTOR_t),
.bDescriptorType=USB_DESCRIPTOR_TYPE_INTERFACE,
.bInterfaceNumber=0,
.bAlternateSetting=USB_ALTERNATE_SETTING_NONE,
.bNumEndpoints=2,
.bInterfaceClass=USB_CLASS_HID,
.bInterfaceSubClass=USB_SUBCLASS_NONE,
.bInterfaceProtocol=USB_PROTOCOL_NONE,
.iInterface=USB_STRING_NONE
},

// HID Interface Descriptor - Generic
{
.bLength=sizeof(USB_HID_INTERFACE_DESCRIPTOR_t),
.bDescriptorType=USB_DESCRIPTOR_TYPE_HID_INTERFACE,
.bcdHID=USB_HID_SPEC,
.bCountryCode=0,
.bNumDescriptors=1,
.bReportDescriptorType=USB_DESCRIPTOR_TYPE_REPORT,
.wDescriptorLength=sizeof(hid_generic_report_descriptor0)
},

// IN Endpoint Descriptor
{
.bLength=sizeof(USB_ENDPOINT_DESCRIPTOR_t),
.bDescriptorType=USB_DESCRIPTOR_TYPE_ENDPOINT,
.bEndpointAddress=USB_INTERFACE0_IN_EP | USB_ENDPOINT_DIR_IN,
.bmAttributes=USB_TRANSFER_INTERRUPT | USB_EP_ATTR_NO_SYNC | USB_EP_USAGE_DATA,
.wMaxPacketSize=USB_INTERFACE0_IN_EP_SIZE,
.bInterval=USB_INTERFACE0_IN_EP_SERVICE_INTERVAL
},

// OUT Endpoint Descriptor
{
.bLength=sizeof(USB_ENDPOINT_DESCRIPTOR_t),
.bDescriptorType=USB_DESCRIPTOR_TYPE_ENDPOINT,
.bEndpointAddress=USB_INTERFACE0_OUT_EP | USB_ENDPOINT_DIR_OUT,
.bmAttributes=USB_TRANSFER_INTERRUPT | USB_EP_ATTR_NO_SYNC | USB_EP_USAGE_DATA,
.wMaxPacketSize=USB_INTERFACE0_OUT_EP_SIZE,
.bInterval=USB_INTERFACE0_OUT_EP_SERVICE_INTERVAL
}
};

// This table defines which descriptor data is sent for each specific
// request from the host (in wValue and wIndex)
flash USB_DESCRIPTOR_LIST_t usb_descriptor_list[]=
{
{0,USB_DESCRIPTOR_TYPE_DEVICE,0,&usb_device_descriptor,sizeof(usb_device_descriptor)},
{0,USB_DESCRIPTOR_TYPE_CONFIGURATION,0,&usb_config_descriptor,sizeof(usb_config_descriptor)},
{0,USB_DESCRIPTOR_TYPE_HID_INTERFACE,0 /* Interface # */,&usb_config_descriptor.interface0_hid_descriptor,sizeof(USB_HID_INTERFACE_DESCRIPTOR_t)},
{0,USB_DESCRIPTOR_TYPE_REPORT,0 /* Interface # */,hid_generic_report_descriptor0,sizeof(hid_generic_report_descriptor0)},
{0,USB_DESCRIPTOR_TYPE_STRING,0,&usb_string0,sizeof(usb_string0)},
{1,USB_DESCRIPTOR_TYPE_STRING,USB_LANG_ID_US_ENGLISH,&usb_string1,sizeof(usb_string1)},
{2,USB_DESCRIPTOR_TYPE_STRING,USB_LANG_ID_US_ENGLISH,&usb_string2,sizeof(usb_string2)},
{3,USB_DESCRIPTOR_TYPE_STRING,USB_LANG_ID_US_ENGLISH,&usb_string3,sizeof(usb_string3)}
};

// USB device configuration
flash USB_CONFIG_t usb_config=
{
// Interface(s) configuration
.interface=
{
// Interface 0
{
.bInterfaceClass=USB_CLASS_HID,
.bInterfaceProtocol=USB_PROTOCOL_NONE,
.report_data=0,
.report_size=0,
// IN endpoint configuration
.in={.ep=USB_INTERFACE0_IN_EP,.type=USB_TRANSFER_INTERRUPT,.size=USB_INTERFACE0_IN_EP_SIZE},
// OUT endpoint configuration
.out={.ep=USB_INTERFACE0_OUT_EP,.type=USB_TRANSFER_INTERRUPT,.size=USB_INTERFACE0_OUT_EP_SIZE}
}
},
.pdescriptor_list=usb_descriptor_list,
.descriptor_list_items=sizeof(usb_descriptor_list)/sizeof(USB_DESCRIPTOR_LIST_t),
.timeout={.tx=USB_TX_TIMEOUT,.rx=USB_RX_TIMEOUT}
};
