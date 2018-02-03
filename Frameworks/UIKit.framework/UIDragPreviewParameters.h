/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDragPreviewParameters : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    bool  _textMode;
    UIBezierPath * _visiblePath;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (getter=_textMode, nonatomic, readonly) bool textMode;
@property (nonatomic, copy) UIBezierPath *visiblePath;

- (void).cxx_destruct;
- (id)_initWithTextMode:(bool)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3;
- (bool)_textMode;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTextLineRects:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setVisiblePath:(id)arg1;
- (id)visiblePath;

@end
