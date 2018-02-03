/* made by EzioChiu.
 */

@protocol NSManagedObjectContextFaultingDelegate <NSObject>

@optional

- (long long)context:(NSManagedObjectContext *)arg1 shouldHandleInaccessibleFault:(NSManagedObject *)arg2 forObjectID:(NSManagedObjectID *)arg3 andTrigger:(NSPropertyDescription *)arg4;

@end
