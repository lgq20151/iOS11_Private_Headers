/* made by EzioChiu.
 */

@protocol PKPassFaceDelegate <NSObject>

@required

- (bool)passFaceBarcodeButtonEnabled;
- (void)passFaceBarcodeButtonPressed:(PKPassFaceView *)arg1;
- (bool)passFaceDeleteButtonEnabled;
- (void)passFaceDeleteButtonPressed:(PKPassFaceView *)arg1;
- (void)passFaceInfoButtonPressed:(PKPassFaceView *)arg1;

@end
