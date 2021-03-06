/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLImageData : NSObject {
    struct CGImageSource { } * _imageSource;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)durations;
- (id)imageAtIndex:(unsigned long long)arg1;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1;
- (long long)orientation;
- (id)type;

@end
