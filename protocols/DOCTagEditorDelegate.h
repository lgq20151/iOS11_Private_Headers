/* made by EzioChiu.
 */

@protocol DOCTagEditorDelegate <NSObject>

@required

- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidCreateTag:(DOCTag *)arg2;
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidDeselectTag:(DOCTag *)arg2;
- (void)tagEditor:(id <DOCTagEditorPresenter>)arg1 userDidSelectTag:(DOCTag *)arg2;

@end
