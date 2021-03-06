/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibraryKeepLocalChangeRequest : NSObject <NSCopying> {
    long long  _enableState;
    MPModelObject * _modelObject;
}

@property (nonatomic) long long enableState;
@property (nonatomic, retain) MPModelObject *modelObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)enableState;
- (id)modelObject;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (void)setEnableState:(long long)arg1;
- (void)setModelObject:(id)arg1;

@end
