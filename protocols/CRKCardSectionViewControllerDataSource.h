/* made by EzioChiu.
 */

@protocol CRKCardSectionViewControllerDataSource <NSObject>

@required

- (NSSet *)cardSectionViewController:(CRKCardSectionViewController *)arg1 handledParametersForInteraction:(INInteraction *)arg2;
- (INInteraction *)cardSectionViewController:(CRKCardSectionViewController *)arg1 interactionWithIdentifier:(NSString *)arg2;
- (NSArray *)cardSectionViewController:(CRKCardSectionViewController *)arg1 interfaceSectionsForInteraction:(INInteraction *)arg2;

@end
