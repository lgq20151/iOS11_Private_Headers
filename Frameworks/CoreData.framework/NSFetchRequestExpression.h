/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSFetchRequestExpression : NSExpression {
    NSExpression * _fetchRequest;
    struct _fetchExpressionFlags { 
        unsigned int isCountOnly : 1; 
        unsigned int _RESERVED : 31; 
    }  _flags;
    NSExpression * _managedObjectContext;
    void * _reserved1;
    void * _reserved2;
    void * _reserved3;
    void * _reserved4;
}

@property (readonly) NSExpression *contextExpression;
@property (getter=isCountOnlyRequest, readonly) bool countOnlyRequest;
@property (readonly) NSExpression *requestExpression;

+ (id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(bool)arg3;

- (id)_expressionWithSubstitutionVariables:(id)arg1;
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;
- (id)contextExpression;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)expressionType;
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;
- (unsigned long long)hash;
- (id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isCountOnlyRequest;
- (bool)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)requestExpression;

@end
