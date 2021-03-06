/* made by EzioChiu
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSDatabaseBuilder : NSObject {
    NSObject<OS_dispatch_queue> * _ioQueue;
}

- (void)createAndSeedLocalDatabase:(bool*)arg1;
- (void)dealloc;
- (id)initWithIOQueue:(id)arg1;
- (void)setSeedingComplete:(bool)arg1;

@end
