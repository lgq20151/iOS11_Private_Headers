/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelection : NSObject {
    <UIWebSelectionBlock> * _base;
    struct CGSize { 
        double width; 
        double height; 
    }  _desiredSize;
    UIWebDocumentView * _documentView;
    <UIWebSelectionBlock> * _extent;
    UITextSelection * _textSelection;
}

@property (nonatomic, retain) <UIWebSelectionBlock> *base;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic) struct CGSize { double x1; double x2; } desiredSize;
@property (nonatomic, readonly) UIWebDocumentView *documentView;
@property (nonatomic, retain) <UIWebSelectionBlock> *extent;
@property (getter=isTextOnly, nonatomic, readonly) bool textOnly;
@property (nonatomic, readonly) UITextSelection *textSelection;
@property (nonatomic, readonly) bool valid;

- (void)adjustSelectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 towardsPoint:(struct CGPoint { double x1; double x2; })arg2 withNewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)applySelectionToWebDocumentView;
- (id)asDomRange;
- (id)base;
- (id)blockAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)blockContainsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)blockOfSameWidthAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingTextSelectionRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingTextSelectionRectAndInsideFixedPosition:(int*)arg1;
- (void)dealloc;
- (id)description;
- (struct CGSize { double x1; double x2; })desiredSize;
- (double)distanceBetweenFirstRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 second:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 edge:(int)arg3;
- (id)documentView;
- (id)domDocument;
- (id)duplicate;
- (id)elementAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)extent;
- (void)growFromEdge:(int)arg1;
- (void)growSelectionTowardsPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithDocumentView:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSelection:(id)arg1;
- (bool)isTextOnly;
- (void)moveEdge:(int)arg1 outwards:(bool)arg2;
- (void)selectionChanged;
- (void)setBase:(id)arg1;
- (void)setDesiredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setExtent:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1 ignoringLargeBlocks:(bool)arg2;
- (void)shrinkFromEdge:(int)arg1;
- (void)shrinkSelectionFromPoint:(struct CGPoint { double x1; double x2; })arg1 towardsPoint:(struct CGPoint { double x1; double x2; })arg2 withNewRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)textRepresentation;
- (id)textSelection;
- (id)textSelectionRects;
- (bool)tryToShrinkToBaseAndExtent;
- (void)useBlock;
- (bool)valid;
- (id)webArchive;
- (id)webFrame;
- (id)webView;

@end
