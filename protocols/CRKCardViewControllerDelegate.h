/* made by EzioChiu.
 */

@protocol CRKCardViewControllerDelegate <CRFeedbackListener>

@optional

- (<CRCard> *)baseCardForCardViewController:(CRKCardViewController *)arg1;
- (bool)canPerformReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (struct CGSize { double x1; double x2; })cardViewController:(CRKCardViewController *)arg1 boundingSizeForCardSectionViewController:(CRKCardSectionViewController *)arg2;
- (void)cardViewController:(CRKCardViewController *)arg1 didFailToLoadCard:(id <CRCard>)arg2;
- (void)cardViewController:(CRKCardViewController *)arg1 requestsHandlingOfIntent:(INIntent *)arg2;
- (void)cardViewControllerBoundsDidChange:(CRKCardViewController *)arg1;
- (void)cardViewControllerDidLoad:(CRKCardViewController *)arg1;
- (unsigned long long)navigationIndexOfCardViewController:(CRKCardViewController *)arg1;
- (bool)performNextCardCommand:(CRNextCardCommand *)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (bool)performPunchoutCommand:(CRPunchoutCommand *)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (bool)performReferentialCommand:(id <CRReferentialCommand>)arg1 forCardViewController:(CRKCardViewController *)arg2;
- (void)presentViewController:(UIViewController *)arg1 forCardViewController:(CRKCardViewController *)arg2;

@end
