/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UITextDraggableGeometrySameViewDropOperation : NSObject <UITextDraggableGeometrySameViewDropOperation> {
    unsigned long long  _operation;
    NSArray * _sourceRanges;
    UITextRange * _targetRange;
    NSAttributedString * _text;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long operation;
@property (nonatomic, retain) NSArray *sourceRanges;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextRange *targetRange;
@property (nonatomic, retain) NSAttributedString *text;

- (void).cxx_destruct;
- (unsigned long long)operation;
- (void)setOperation:(unsigned long long)arg1;
- (void)setSourceRanges:(id)arg1;
- (void)setTargetRange:(id)arg1;
- (void)setText:(id)arg1;
- (id)sourceRanges;
- (id)targetRange;
- (id)text;

@end
