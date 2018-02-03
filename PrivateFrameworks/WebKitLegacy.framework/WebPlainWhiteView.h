/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebPlainWhiteView : WAKView <WebDocumentElement, WebDocumentView>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dataSourceUpdated:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1 allowShadowContent:(bool)arg2;
- (void)layout;
- (void)setDataSource:(id)arg1;
- (void)setNeedsLayout:(bool)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;

@end
