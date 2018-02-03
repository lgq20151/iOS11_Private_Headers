/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface _NSLayoutRuleNode : NSObject {
    <_NSLayoutRuleNodeParent> * _parentNode;
    <NSLayoutRule> * _representedRule;
}

@property <_NSLayoutRuleNodeParent> *parentNode;
@property (copy) <NSLayoutRule> *representedRule;

- (void)dealloc;
- (id)description;
- (id)initWithRule:(id)arg1;
- (id)parentNode;
- (id)representedRule;
- (void)setParentNode:(id)arg1;
- (void)setRepresentedRule:(id)arg1;

@end
