/* made by EzioChiu.
 */

@protocol TSSPropertyValueArchiving

@required

+ (id)instanceWithArchive:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(TSPUnarchiver *)arg2;

- (id)initWithArchive:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(TSPUnarchiver *)arg2;
- (void)saveToArchive:(struct Message { int (**x1)(); }*)arg1 archiver:(TSPArchiver *)arg2;

@end