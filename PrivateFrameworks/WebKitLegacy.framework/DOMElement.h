/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface DOMElement : DOMNode

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundsInRootViewSpace;
@property (readonly) unsigned int childElementCount;
@property (copy) NSString *className;
@property (readonly) int clientHeight;
@property (readonly) int clientLeft;
@property (readonly) int clientTop;
@property (readonly) int clientWidth;
@property (readonly) DOMElement *firstElementChild;
@property (copy) NSString *innerHTML;
@property (readonly, copy) NSString *innerText;
@property (readonly) DOMElement *lastElementChild;
@property (readonly) DOMElement *nextElementSibling;
@property (readonly) int offsetHeight;
@property (readonly) int offsetLeft;
@property (readonly) DOMElement *offsetParent;
@property (readonly) int offsetTop;
@property (readonly) int offsetWidth;
@property (copy) NSString *outerHTML;
@property (readonly) DOMElement *previousElementSibling;
@property (readonly) int scrollHeight;
@property int scrollLeft;
@property int scrollTop;
@property (readonly) int scrollWidth;
@property (readonly) DOMCSSStyleDeclaration *style;
@property (readonly, copy) NSString *tagName;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (id)_DOMElementFromJSContext:(struct OpaqueJSContext { }*)arg1 value:(struct OpaqueJSValue { }*)arg2;

- (struct __CTFont { }*)_font;
- (id)_getURLAttribute:(id)arg1;
- (void)blur;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInRootViewSpace;
- (unsigned int)childElementCount;
- (id)children;
- (id)classList;
- (id)className;
- (int)clientHeight;
- (int)clientLeft;
- (int)clientTop;
- (int)clientWidth;
- (id)closest:(id)arg1;
- (id)firstElementChild;
- (void)focus;
- (id)getAttribute:(id)arg1;
- (id)getAttributeNS:(id)arg1 :(id)arg2;
- (id)getAttributeNS:(id)arg1 localName:(id)arg2;
- (id)getAttributeNode:(id)arg1;
- (id)getAttributeNodeNS:(id)arg1 :(id)arg2;
- (id)getAttributeNodeNS:(id)arg1 localName:(id)arg2;
- (id)getElementsByClassName:(id)arg1;
- (id)getElementsByTagName:(id)arg1;
- (id)getElementsByTagNameNS:(id)arg1 :(id)arg2;
- (id)getElementsByTagNameNS:(id)arg1 localName:(id)arg2;
- (bool)hasAttribute:(id)arg1;
- (bool)hasAttributeNS:(id)arg1 :(id)arg2;
- (bool)hasAttributeNS:(id)arg1 localName:(id)arg2;
- (id)innerHTML;
- (id)innerText;
- (bool)isFocused;
- (id)lastElementChild;
- (bool)matches:(id)arg1;
- (id)nextElementSibling;
- (int)offsetHeight;
- (int)offsetLeft;
- (id)offsetParent;
- (int)offsetTop;
- (int)offsetWidth;
- (id)outerHTML;
- (id)previousElementSibling;
- (id)querySelector:(id)arg1;
- (id)querySelectorAll:(id)arg1;
- (void)remove;
- (void)removeAttribute:(id)arg1;
- (void)removeAttributeNS:(id)arg1 :(id)arg2;
- (void)removeAttributeNS:(id)arg1 localName:(id)arg2;
- (id)removeAttributeNode:(id)arg1;
- (void)scrollByLines:(int)arg1;
- (void)scrollByPages:(int)arg1;
- (int)scrollHeight;
- (void)scrollIntoView:(bool)arg1;
- (void)scrollIntoViewIfNeeded:(bool)arg1;
- (int)scrollLeft;
- (int)scrollTop;
- (int)scrollWidth;
- (void)setAttribute:(id)arg1 :(id)arg2;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (void)setAttributeNS:(id)arg1 :(id)arg2 :(id)arg3;
- (void)setAttributeNS:(id)arg1 qualifiedName:(id)arg2 value:(id)arg3;
- (id)setAttributeNode:(id)arg1;
- (id)setAttributeNodeNS:(id)arg1;
- (void)setClassName:(id)arg1;
- (void)setInnerHTML:(id)arg1;
- (void)setOuterHTML:(id)arg1;
- (void)setScrollLeft:(int)arg1;
- (void)setScrollTop:(int)arg1;
- (void)setUiactions:(id)arg1;
- (int)structuralComplexityContribution;
- (id)style;
- (id)tagName;
- (id)uiactions;
- (bool)webkitMatchesSelector:(id)arg1;
- (id)webkitRegionOverset;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (bool)exceedsStructuralComplexity:(int)arg1;
- (void)getTextWritingDirection:(long long*)arg1 override:(bool*)arg2;
- (bool)hasCustomLineHeight;
- (bool)inDocument;
- (bool)isHidden;
- (bool)selectable;
- (id)tapHighlightColor;
- (bool)touchCalloutEnabled;

@end
