/* made by EzioChiu.
 */

@protocol NFReaderSessionDelegate <NSObject>

@optional

- (void)readerSession:(NFReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
- (void)readerSession:(NFReaderSession *)arg1 externalReaderFieldEvent:(NFTechnologyEvent *)arg2;
- (void)readerSessionDidEndUnexpectedly:(NFReaderSession *)arg1;

@end
