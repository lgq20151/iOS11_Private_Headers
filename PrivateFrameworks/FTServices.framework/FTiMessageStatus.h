/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTiMessageStatus : NSObject {
    bool  _blockPost;
    int  _iMessageAllowedToken;
    bool  _supportsiMessage;
}

@property (nonatomic) bool blockPost;
@property (nonatomic) int iMessageAllowedToken;
@property (nonatomic, readonly) bool iMessageSupported;
@property bool supportsiMessage;

+ (id)sharedInstance;

- (void)_addObservers;
- (bool)_noCache_iMessageAllowed;
- (void)_reload;
- (void)_removeObservers;
- (bool)blockPost;
- (void)dealloc;
- (int)iMessageAllowedToken;
- (bool)iMessageSupported;
- (id)initPrivate;
- (void)setBlockPost:(bool)arg1;
- (void)setIMessageAllowedToken:(int)arg1;
- (void)setSupportsiMessage:(bool)arg1;
- (bool)supportsiMessage;

@end
