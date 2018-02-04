/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNTextAlertDescription : CNAbstractActivityAlertDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void*)ABValueForABPerson:(void*)arg1;
- (id)CNValueForContact:(id)arg1;
- (bool)abPropertyID:(int*)arg1;
- (bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)setABValue:(void*)arg1 onABPerson:(void*)arg2 error:(struct __CFError {}**)arg3;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;

@end