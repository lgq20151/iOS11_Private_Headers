/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface _CSStore2DataContainer : NSObject {
    struct Data { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct Table { struct Unit { unsigned int x_1_2_1 : 30; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3; BOOL x_1_2_4[0]; } x_6_1_1; BOOL x_6_1_2[64]; unsigned int x_6_1_3; unsigned int x_6_1_4; } x6; } * p;
    unsigned int  pAllocatedLength;
}

- (void)dealloc;
- (id)init;
- (id)initWithBytesNoCopy:(struct Data { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; struct Table { struct Unit { unsigned int x_1_2_1 : 30; unsigned int x_1_2_2 : 2; unsigned int x_1_2_3; BOOL x_1_2_4[0]; } x_6_1_1; BOOL x_6_1_2[64]; unsigned int x_6_1_3; unsigned int x_6_1_4; } x6; }*)arg1 length:(unsigned int)arg2;

@end
