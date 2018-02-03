/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDCFDataBuffer : CFPDDataBuffer {
    struct __CFData { } * data;
}

- (void*)bytes;
- (struct __CFData { }*)copyCFData;
- (void)dealloc;
- (id)initWithCFData:(struct __CFData { }*)arg1;
- (unsigned long long)length;

@end
