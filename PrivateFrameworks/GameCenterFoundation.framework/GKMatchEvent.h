/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchEvent : NSObject {
    NSData * _data;
    GKPlayer * _recipientPlayer;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) GKPlayer *recipientPlayer;

- (id)data;
- (void)dealloc;
- (id)recipientPlayer;
- (void)setData:(id)arg1;
- (void)setRecipientPlayer:(id)arg1;

@end
