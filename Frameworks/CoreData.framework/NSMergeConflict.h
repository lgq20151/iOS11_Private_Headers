/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMergeConflict : NSObject <NSSecureCoding> {
    unsigned long long  _newVersion;
    unsigned long long  _oldVersion;
    id  _snapshot1;
    id  _snapshot2;
    id  _snapshot3;
    id  _source;
}

@property (readonly, retain) NSDictionary *cachedSnapshot;
@property (readonly) unsigned long long newVersionNumber;
@property (readonly, retain) NSDictionary *objectSnapshot;
@property (readonly) unsigned long long oldVersionNumber;
@property (readonly, retain) NSDictionary *persistedSnapshot;
@property (readonly, retain) NSManagedObject *sourceObject;

+ (bool)supportsSecureCoding;

- (void)_doCleanupForXPCStore:(id)arg1 context:(id)arg2;
- (id)ancestorSnapshot;
- (id)cachedSnapshot;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;
- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 snapshot1:(id)arg4 snapshot2:(id)arg5 snapshot3:(id)arg6;
- (unsigned long long)newVersionNumber;
- (id)objectForKey:(id)arg1;
- (id)objectSnapshot;
- (unsigned long long)oldVersionNumber;
- (id)persistedSnapshot;
- (id)sourceObject;
- (id)valueForKey:(id)arg1;

@end
