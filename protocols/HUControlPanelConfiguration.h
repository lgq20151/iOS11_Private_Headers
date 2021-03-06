/* made by EzioChiu.
 */

@protocol HUControlPanelConfiguration <NSObject>

@required

- (Class)cellClass;
- (<HUControlPanelRule> *)rule;
- (void)setupControlsForCell:(HUControlPanelCell *)arg1 item:(HFControlPanelItem *)arg2;

@optional

- (bool)shouldShowSectionTitleForItem:(HFControlPanelItem *)arg1;
- (HFValueTransformer *)valueTransformerForControlItem:(HFControlItem *)arg1;

@end
