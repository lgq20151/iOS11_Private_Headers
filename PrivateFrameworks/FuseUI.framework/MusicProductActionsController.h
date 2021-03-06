/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductActionsController : NSObject <MusicClientContextConsuming> {
    MusicClientContext * _clientContext;
    NSDictionary * _extraInfo;
    MusicProductActionsTemplateViewElement * _templateViewElement;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientContext;
- (id)initWithTemplateViewElement:(id)arg1 clientContext:(id)arg2 extraInfo:(id)arg3;
- (void)setClientContext:(id)arg1;

@end
