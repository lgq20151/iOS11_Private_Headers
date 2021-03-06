/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSegmentableSlider : UISlider {
    bool  _locksToSegment;
    _UIFeedbackRetargetBehavior * _retargetFeedback;
    unsigned long long  _segmentCount;
    bool  _segmented;
    bool  _snapsToSegment;
    UIColor * _trackMarkersColor;
}

@property (nonatomic) bool locksToSegment;
@property (nonatomic, retain) _UIFeedbackRetargetBehavior *retargetFeedback;
@property (nonatomic) unsigned long long segmentCount;
@property (getter=isSegmented, nonatomic) bool segmented;
@property (nonatomic) bool snapsToSegment;

- (void).cxx_destruct;
- (void)controlInteractionBegan:(id)arg1;
- (void)controlInteractionEnded:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSegmented;
- (bool)locksToSegment;
- (unsigned long long)numberOfTicks;
- (float)offsetBetweenTicksForNumberOfTicks:(unsigned long long)arg1;
- (id)retargetFeedback;
- (unsigned long long)segmentCount;
- (void)setLocksToSegment:(bool)arg1;
- (void)setRetargetFeedback:(id)arg1;
- (void)setSegmentCount:(unsigned long long)arg1;
- (void)setSegmented:(bool)arg1;
- (void)setSnapsToSegment:(bool)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (void)sliderTapped:(id)arg1;
- (bool)snapsToSegment;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
