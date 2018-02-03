/* made by EzioChiu
   Image: /usr/lib/libAccessibility.dylib
 */

@interface AXDefaultsObserverExecuteBlockNotificationAction : NSObject <AXDefaultsObserverAction> {
    id /* block */  _block;
}

@property (nonatomic, copy) id /* block */ block;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithBlock:(id /* block */)arg1;
- (void)performForChangedDefault:(id)arg1;
- (void)setBlock:(id /* block */)arg1;

@end
