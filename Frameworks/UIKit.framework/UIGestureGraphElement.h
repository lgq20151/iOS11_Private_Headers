/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureGraphElement : NSObject {
    NSString * _label;
    NSMutableDictionary * _properties;
}

@property (nonatomic, readonly, copy) NSString *label;

- (void).cxx_destruct;
- (id)description;
- (void)enumeratePropertiesUsingBlock:(id /* block */)arg1;
- (bool)hasProperties:(id)arg1;
- (id)initWithLabel:(id)arg1;
- (id)label;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertyForKey:(id)arg1;
- (void)removeAllProperties;
- (void)removePropertyForKey:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setProperties:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;

@end
