/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLSingleItemThumbnailGenerator : NSObject <NSSecureCoding, QLItemThumbnailGeneratorProtocolInternal> {
    bool  _isRepresentative;
    QLItem * _item;
    UIImage * _thumbnail;
    QLItemThumbnailGenerator * _thumbnailGenerator;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) QLItem *item;
@property (readonly) Class superclass;
@property (nonatomic, retain) QLItemThumbnailGenerator *thumbnailGenerator;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_concurrentQueue;
- (void)_handleThumbnailGenerationFinishedWithThumbnail:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 clientCompletionBlock:(id /* block */)arg3;
- (void)_provideThumbnailForUbiquitousURLWithSize:(struct CGSize { double x1; double x2; })arg1 completionBlock:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)generateThumbnailWithSize:(struct CGSize { double x1; double x2; })arg1 completionBlock:(id /* block */)arg2;
- (id)genericIconWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void)setThumbnailGenerator:(id)arg1;
- (id)thumbnailGenerator;

@end