/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface _VNDataImageSpecifier : VNImageSpecifier {
    NSData * _data;
}

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)newImageBufferWithOptions:(id)arg1 error:(id*)arg2;
- (id)observationsCacheKey;

@end