/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebSelectSinglePicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate, UIWebFormControl> {
    long long  _indexToSelectWhenDone;
    NSArray * _optionItems;
    <UIWebSelectedItemPrivate> * _optionToSelectWhenDone;
    DOMHTMLSelectElement * _selectNode;
    long long  _selectedIndex;
    <UIWebSelectedItemPrivate> * _selectedOptionItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1 allItems:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;

@end
