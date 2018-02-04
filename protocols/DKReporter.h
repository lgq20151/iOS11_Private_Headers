/* made by EzioChiu.
 */

@protocol DKReporter <NSObject>

@required

- (DKComponentIdentity *)componentIdentity;
- (bool)isPresent;
- (void)populateAttributes:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setupWithContext:(DKReporterContext *)arg1;

@optional

- (void)teardown;

@end