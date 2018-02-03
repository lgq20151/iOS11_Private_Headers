/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSApplicationShortcutCustomImageIcon : SBSApplicationShortcutIcon {
    long long  _dataType;
    NSData * _imageData;
    bool  _isTemplate;
}

@property (nonatomic, readonly) long long dataType;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) NSData *imagePNGData;
@property (nonatomic, readonly) bool isTemplate;

- (void).cxx_destruct;
- (id)_initForSubclass;
- (long long)dataType;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)imageData;
- (id)imagePNGData;
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2;
- (id)initWithImageData:(id)arg1 dataType:(long long)arg2 isTemplate:(bool)arg3;
- (id)initWithImagePNGData:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTemplate;

@end
