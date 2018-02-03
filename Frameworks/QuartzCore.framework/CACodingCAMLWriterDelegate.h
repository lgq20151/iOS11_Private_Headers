/* made by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CACodingCAMLWriterDelegate : NSObject <CAMLWriterDelegate> {
    NSDictionary * _image_encode_options;
    NSString * _image_format;
    NSString * _resource_dir;
    int  _serial;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSDictionary *image_encode_options;
@property (copy) NSString *image_format;
@property (readonly) Class superclass;

- (id)CAMLWriter:(id)arg1 URLForResource:(id)arg2;
- (id)CAMLWriter:(id)arg1 typeForObject:(id)arg2;
- (void)dealloc;
- (id)image_encode_options;
- (id)image_format;
- (id)initWithResourceDir:(id)arg1;
- (void)setImage_encode_options:(id)arg1;
- (void)setImage_format:(id)arg1;

@end
