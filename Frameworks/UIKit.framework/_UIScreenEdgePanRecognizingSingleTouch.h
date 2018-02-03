/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIScreenEdgePanRecognizingSingleTouch : NSObject <_UIScreenEdgePanRecognizerDelegate, _UIScreenEdgePanRecognizing> {
    <_UIScreenEdgePanRecognizingDelegate> * _delegate;
    _UIScreenEdgePanRecognizer * _recognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIScreenEdgePanRecognizingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool recognizeAlongEdge;
@property (nonatomic) bool recognizeImmediatelyFromEdgeLocked;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenBounds;
@property (nonatomic, readonly) _UIScreenEdgePanRecognizerSettings *settings;
@property (nonatomic) bool shouldUseGrapeFlags;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long targetEdges;

- (void).cxx_destruct;
- (id)delegate;
- (void)giveTouchIdentifiersToIgnore:(id /* block */)arg1;
- (void)incorporateTouchSampleAtLocation:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2 modifier:(long long)arg3 region:(unsigned long long)arg4 interfaceOrientation:(long long)arg5 forceState:(long long)arg6 forTouchIdentifier:(unsigned int)arg7;
- (id)initWithType:(long long)arg1;
- (bool)isRequiringLongPress;
- (unsigned long long)maxInitialTouches;
- (bool)recognizeAlongEdge;
- (bool)recognizeImmediatelyFromEdgeLocked;
- (void)reset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenBounds;
- (void)screenEdgePanRecognizerStateDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecognizeAlongEdge:(bool)arg1;
- (void)setRecognizeImmediatelyFromEdgeLocked:(bool)arg1;
- (void)setScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldUseGrapeFlags:(bool)arg1;
- (void)setTargetEdges:(unsigned long long)arg1;
- (id)settings;
- (bool)shouldUseGrapeFlags;
- (long long)state;
- (unsigned long long)targetEdges;
- (unsigned long long)touchedEdgesForInterfaceOrientation:(long long)arg1;

@end
