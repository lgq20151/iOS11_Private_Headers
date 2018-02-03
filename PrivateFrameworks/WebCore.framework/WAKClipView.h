/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WAKClipView : WAKView {
    bool  _copiesOnScroll;
    WAKView * _documentView;
}

@property (nonatomic) bool copiesOnScroll;
@property (nonatomic, readonly) WAKView *documentView;

- (void)_setDocumentView:(id)arg1;
- (bool)copiesOnScroll;
- (void)dealloc;
- (id)documentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentVisibleRect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCopiesOnScroll:(bool)arg1;

@end
