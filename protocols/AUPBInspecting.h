/* made by EzioChiu.
 */

@protocol AUPBInspecting

@required

- (void)processingBlock:(unsigned int)arg1 propertiesChanged:(NSArray *)arg2 withQualifierData:(NSData *)arg3;
- (void)processingBlock:(unsigned int)arg1 propertyChanged:(unsigned int)arg2;

@end
