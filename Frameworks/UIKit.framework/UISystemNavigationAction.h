/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISystemNavigationAction : BSAction {
    NSArray * _destinations;
}

@property (nonatomic, readonly) NSArray *destinations;

- (void).cxx_destruct;
- (long long)UIActionType;
- (id)URLForDestination:(unsigned long long)arg1;
- (id)_destinationContextForResponseDestination:(unsigned long long)arg1;
- (id)bundleIdForDestination:(unsigned long long)arg1;
- (id)destinations;
- (id)initWithDestinationContexts:(id)arg1 forResponseOnQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (bool)sendResponseForDestination:(unsigned long long)arg1;
- (id)titleForDestination:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
