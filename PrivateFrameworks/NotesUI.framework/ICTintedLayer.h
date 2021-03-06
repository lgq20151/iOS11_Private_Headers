/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICTintedLayer : CALayer {
    id  _originalContents;
    struct UIColor { Class x1; } * _tintColor;
}

@property (nonatomic, retain) id originalContents;
@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)originalContents;
- (void)setContents:(id)arg1;
- (void)setOriginalContents:(id)arg1;
- (void)setTintColor:(struct UIColor { Class x1; }*)arg1;
- (struct UIColor { Class x1; }*)tintColor;
- (void)updateContents;

@end
