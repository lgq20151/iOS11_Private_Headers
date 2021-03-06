/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIRenderInfo : NSObject {
    void * _priv;
}

@property (readonly) double kernelExecutionTime;
@property (readonly) long long passCount;
@property (readonly) long long pixelsProcessed;

+ (id)renderInfoWithCompletedTask:(id)arg1;

- (id)_pdfDataRepresentation;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithCompletedTask:(id)arg1;
- (double)kernelExecutionTime;
- (long long)passCount;
- (long long)pixelsOverdrawn;
- (long long)pixelsProcessed;

@end
