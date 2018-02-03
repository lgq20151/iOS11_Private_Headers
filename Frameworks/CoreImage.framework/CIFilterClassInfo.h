/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFilterClassInfo : NSObject {
    NSArray * inputClasses;
    NSArray * inputKeys;
    NSArray * outputKeys;
}

+ (id)classInfoForClass:(Class)arg1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithClass:(Class)arg1;
- (id)inputClasses;
- (id)inputKeys;
- (id)outputKeys;

@end
