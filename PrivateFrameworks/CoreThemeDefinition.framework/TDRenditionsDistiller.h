/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDRenditionsDistiller : NSObject {
    TDLogger * _logger;
    CoreThemeDocument * document;
    NSConditionLock * inQueueLock;
    bool  noMoreCSIDataInfo;
    bool  noMoreRenditions;
    NSConditionLock * outQueueLock;
    NSMutableArray * psiDataInfoOutQueue;
    NSMutableArray * renditionInQueue;
    bool  shouldCompressCSIDataFlag;
}

@property (retain) TDLogger *logger;

- (void)_distill:(id)arg1;
- (void)_enqueueCSIDataInfo:(id)arg1;
- (void)_enqueueDistillingAbortedInfo;
- (void)_enqueueLastCSIDataInfoFlag;
- (void)_enqueueOnInQueueTheObject:(id)arg1;
- (void)_enqueueOnOutQueueTheObject:(id)arg1;
- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;
- (id)_nextObjectFromInQueue;
- (void)dealloc;
- (void)detachDistillationThread;
- (void)enqueueAbortFlag;
- (void)enqueueLastRenditionFlag;
- (void)enqueueRenditionSpec:(id)arg1;
- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(bool)arg2;
- (id)logger;
- (id)nextCSIDataInfoFromQueue;
- (void)setLogger:(id)arg1;

@end
