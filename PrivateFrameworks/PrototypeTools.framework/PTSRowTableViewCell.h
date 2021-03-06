/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSRowTableViewCell : UITableViewCell <PTSRowObserver> {
    <PTSRowTableViewCellDelegate> * _delegate;
    PTSRow * _row;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PTSRowTableViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PTSRow *row;
@property (readonly) Class superclass;

+ (double)cellHeightForRow:(id)arg1;
+ (long long)cellStyleForRow:(id)arg1;
+ (id)reuseIdentifierForRow:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)prepareForReuse;
- (id)row;
- (void)rowDidChangeImage:(id)arg1;
- (void)rowDidChangeTitle:(id)arg1;
- (void)rowDidChangeValue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setRow:(id)arg1;
- (void)updateCellCharacteristics;
- (void)updateDisplayedContent;
- (void)updateDisplayedValue;

@end
