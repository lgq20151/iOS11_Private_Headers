/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

@interface IMTypingIndicatorLayer : CALayer <IMTypingIndicatorLayerProtocol> {
    CALayer * _bubbleContainer;
    double  _bubbleOpacity;
    struct UIColor { Class x1; } * _customBubbleColor;
    bool  _hasDarkBackground;
    id  _iconImage;
    CALayer * _iconImageLayer;
    CALayer * _largeBubble;
    CALayer * _mediumBubble;
    CALayer * _smallBubble;
    CALayer * _thinkingDot;
    CALayer * _thinkingDotContainer;
    CAReplicatorLayer * _thinkingDots;
}

@property (nonatomic, readonly) UIColor *bubbleColor;
@property (nonatomic, retain) CALayer *bubbleContainer;
@property (nonatomic) double bubbleOpacity;
@property (nonatomic, copy) UIColor *customBubbleColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasDarkBackground;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id iconImage;
@property (nonatomic, retain) CALayer *iconImageLayer;
@property (nonatomic, retain) CALayer *largeBubble;
@property (nonatomic, retain) CALayer *mediumBubble;
@property (nonatomic, retain) CALayer *smallBubble;
@property (readonly) Class superclass;
@property (nonatomic, retain) CALayer *thinkingDot;
@property (nonatomic, retain) CALayer *thinkingDotContainer;
@property (nonatomic, retain) CAReplicatorLayer *thinkingDots;

+ (struct UIColor { Class x1; }*)darkBackgroundThinkingDotColor;
+ (struct UIColor { Class x1; }*)defaultBubbleColor;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct UIColor { Class x1; }*)defaultThinkingDotColor;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconImageFrame;
+ (double)iconImageTrailingSpace;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })largeBubbleFrame;
+ (struct CGPoint { double x1; double x2; })largeBubbleGrowOffset;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mediumBubbleFrame;
+ (struct CGPoint { double x1; double x2; })mediumBubbleGrowOffset;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })smallBubbleFrame;
+ (struct CGPoint { double x1; double x2; })smallBubbleGrowOffset;
+ (bool)supportsTypingIndicatorAnimation;
+ (double)thinkingDotDiameter;
+ (double)thinkingDotSpace;
+ (struct CGPoint { double x1; double x2; })thinkingDotsOffset;

- (void).cxx_destruct;
- (void)_buildIconImage;
- (void)_buildThinkingDots;
- (id)_largeBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_largeBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (id)_mediumBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_mediumBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (void)_setup;
- (id)_smallBubbleGrowAnimationsWithSpeed:(double)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)_smallBubblePulseAnimationWithSpeed:(double)arg1 delay:(double)arg2;
- (void)_updateBubbleColors;
- (void)_updateForImage;
- (struct UIColor { Class x1; }*)bubbleColor;
- (id)bubbleContainer;
- (double)bubbleOpacity;
- (double)convertedCurrentMediaTime;
- (struct UIColor { Class x1; }*)customBubbleColor;
- (bool)hasDarkBackground;
- (id)iconImage;
- (id)iconImageLayer;
- (id)init;
- (id)largeBubble;
- (id)mediumBubble;
- (void)setBubbleContainer:(id)arg1;
- (void)setBubbleOpacity:(double)arg1;
- (void)setCustomBubbleColor:(struct UIColor { Class x1; }*)arg1;
- (void)setHasDarkBackground:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageLayer:(id)arg1;
- (void)setLargeBubble:(id)arg1;
- (void)setMediumBubble:(id)arg1;
- (void)setSmallBubble:(id)arg1;
- (void)setThinkingDot:(id)arg1;
- (void)setThinkingDotContainer:(id)arg1;
- (void)setThinkingDots:(id)arg1;
- (id)smallBubble;
- (void)startGrowAnimation;
- (void)startPulseAnimation;
- (void)startShrinkAnimationWithCompletionBlock:(id /* block */)arg1;
- (void)stopAnimation;
- (void)stopPulseAnimation;
- (id)thinkingDot;
- (id)thinkingDotContainer;
- (id)thinkingDots;

@end