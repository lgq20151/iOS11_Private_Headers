/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicStoreCuratorPlaylistsRequest : MPStoreModelRequest {
    long long  _curatorStoreAdamID;
    MusicStoreCuratorPlaylistsResponse * _previousResponse;
}

@property (nonatomic) long long curatorStoreAdamID;
@property (nonatomic, retain) MusicStoreCuratorPlaylistsResponse *previousResponse;

+ (id)allSupportedItemProperties;
+ (id)allSupportedSectionProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)curatorStoreAdamID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newOperationWithResponseHandler:(id /* block */)arg1;
- (id)previousResponse;
- (void)setCuratorStoreAdamID:(long long)arg1;
- (void)setPreviousResponse:(id)arg1;

@end