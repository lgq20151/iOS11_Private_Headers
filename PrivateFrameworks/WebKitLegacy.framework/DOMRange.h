/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMRange : DOMObject <UIWebSelectionBlock>

@property (readonly) bool collapsed;
@property (readonly) DOMNode *commonAncestorContainer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) DOMNode *endContainer;
@property (readonly) int endOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *markupString;
@property (readonly) DOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *text;
@property (nonatomic, readonly) WebArchive *webArchive;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)rangeForFirstPosition:(id)arg1 second:(id)arg2;

- (id)_text;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)cloneContents;
- (id)cloneRange;
- (void)collapse:(bool)arg1;
- (bool)collapsed;
- (id)commonAncestorContainer;
- (short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (short)compareNode:(id)arg1;
- (short)comparePoint:(id)arg1 offset:(int)arg2;
- (id)createContextualFragment:(id)arg1;
- (void)dealloc;
- (void)deleteContents;
- (id)description;
- (void)detach;
- (id)enclosingWordRange;
- (id)endContainer;
- (int)endOffset;
- (id)endPosition;
- (void)expand:(id)arg1;
- (void)extend:(unsigned int)arg1 inDirection:(int)arg2;
- (id)extractContents;
- (id)firstNode;
- (void)insertNode:(id)arg1;
- (bool)intersectsNode:(id)arg1;
- (bool)isPointInRange:(id)arg1 offset:(int)arg2;
- (id)lineBoxRects;
- (id)markupString;
- (void)move:(unsigned int)arg1 inDirection:(int)arg2;
- (struct CGImage { }*)renderedImageForcingBlackText:(bool)arg1;
- (void)selectNode:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (void)setEnd:(id)arg1 :(int)arg2;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setEndAfter:(id)arg1;
- (void)setEndBefore:(id)arg1;
- (void)setStart:(id)arg1 :(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (void)setStartAfter:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (id)startContainer;
- (int)startOffset;
- (id)startPosition;
- (void)surroundContents:(id)arg1;
- (id)text;
- (id)textRects;
- (id)toString;
- (id)webArchive;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (id)asDomNode;
- (id)asDomRange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectAndInsideFixedPosition:(int*)arg1;
- (bool)canShrinkDirectlyToTextOnly;
- (bool)containsBlock:(id)arg1;
- (bool)containsRange:(id)arg1;
- (id)enclosingDocument;
- (bool)isSameBlock:(id)arg1;
- (id)largerParent;
- (id)parentBlock;
- (id)rangeOfContents;
- (bool)rendersAsBlock;
- (bool)selectable;
- (bool)strictlyContainsBlock:(id)arg1;
- (void)unionWithRange:(id)arg1;
- (id)webFrame;

@end
