/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSItemImageCollection : NSObject <NSCopying> {
    NSArray * _itemImages;
}

@property (nonatomic, readonly) NSArray *itemImages;

- (id)_imagesForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_newImagesForDictionary:(id)arg1;
- (id)bestImageForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)imagesForKind:(id)arg1;
- (id)imagesForSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithImageCollection:(id)arg1;
- (id)initWithItemImages:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)itemImages;

@end