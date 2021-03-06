/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCTouchpadView : UIView {
    id /* block */  _configurationHandler;
    bool  _highlighted;
    TVRCTouchProcessor * _touchProcessor;
}

@property (nonatomic, copy) id /* block */ configurationHandler;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic) TVRCTouchProcessor *touchProcessor;

- (void).cxx_destruct;
- (id)_init;
- (void)_notifyConfigurationHandler:(bool)arg1;
- (id /* block */)configurationHandler;
- (bool)isHighlighted;
- (void)setConfigurationHandler:(id /* block */)arg1;
- (void)setTouchProcessor:(id)arg1;
- (id)touchProcessor;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
