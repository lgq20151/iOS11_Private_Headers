/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsTransportButton : MPButton {
    MPCPlayerCommandRequest * _holdBeginCommandRequest;
    MPCPlayerCommandRequest * _holdEndCommandRequest;
    bool  _performingHighlightAnimation;
    bool  _shouldPresentActionSheet;
    MPCPlayerCommandRequest * _touchUpInsideCommandRequest;
}

@property (nonatomic, retain) MPCPlayerCommandRequest *holdBeginCommandRequest;
@property (nonatomic, retain) MPCPlayerCommandRequest *holdEndCommandRequest;
@property (getter=isPerformingHighlightAnimation, nonatomic, readonly) bool performingHighlightAnimation;
@property (nonatomic) bool shouldPresentActionSheet;
@property (nonatomic, retain) MPCPlayerCommandRequest *touchUpInsideCommandRequest;

- (void).cxx_destruct;
- (void)_layoutImageView;
- (void)beginHighlight;
- (void)endHighlight;
- (id)holdBeginCommandRequest;
- (id)holdEndCommandRequest;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isPerformingHighlightAnimation;
- (void)setHighlighted:(bool)arg1;
- (void)setHoldBeginCommandRequest:(id)arg1;
- (void)setHoldEndCommandRequest:(id)arg1;
- (void)setShouldPresentActionSheet:(bool)arg1;
- (void)setTouchUpInsideCommandRequest:(id)arg1;
- (bool)shouldPresentActionSheet;
- (id)touchUpInsideCommandRequest;

@end
