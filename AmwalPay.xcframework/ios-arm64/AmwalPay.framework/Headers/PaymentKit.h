#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class PaymentKitTokenCache, PaymentKitHostUrlProvider, PaymentKitKtor_client_coreHttpClient, PaymentKitHttpClientDI, PaymentKitKoin_coreModule, PaymentKitHttpEngine, PaymentKitWebAuthnDI, PaymentKitWebAuthnHttp, PaymentKitTransaction_dataSessionCache, PaymentKitUser_dataRawIdCache, PaymentKitUser_dataPhoneNumberCache, PaymentKitGetUserByPhoneNumber, PaymentKitRegistrationRequestApiCompanion, PaymentKitRegistrationRequestApi, PaymentKitWebAuthnHttpCompanion, PaymentKitAuthenticationPublicKey, PaymentKitRegistrationVerifyResponseApi, PaymentKitCreationOptions, PaymentKitRegistrationPublicKey, PaymentKitCreationOptionsRelyingParty, PaymentKitCreationOptionsUser, PaymentKitCreationOptionsPublicKeyCredentials, PaymentKitCreationOptionsAuthenticator, PaymentKitCreationOptionsCompanion, PaymentKitCreationOptionsAuthenticatorCompanion, PaymentKitCreationOptionsPublicKeyCredentialsCompanion, PaymentKitCreationOptionsRelyingPartyCompanion, PaymentKitCreationOptionsUserCompanion, PaymentKitRegistrationPublicKeyResponse, PaymentKitRegistrationPublicKeyCompanion, PaymentKitRegistrationPublicKeyResponseCompanion, PaymentKitRegistrationVerifyResponseApiCompanion, PaymentKitAssertionOptions, PaymentKitAuthenticationPublicKeyResponse, PaymentKitAuthenticationPublicKeyCompanion, PaymentKitAuthenticationPublicKeyResponseCompanion, PaymentKitWebauthnProxyModule, PaymentKitEncryptedStore, PaymentKitTokenCacheCompanion, PaymentKitTokenDI, PaymentKitSettingsStore, PaymentKitLocalDataDI, PaymentKitStoreDI, PaymentKitWebAuthnPresentationDI, PaymentKitWebauthnActionsStartBiometricAuth, PaymentKitWebauthnResults, PaymentKitWebauthnResultsConfirmPayment, PaymentKitKotlinThrowable, PaymentKitWebauthnResultsError, PaymentKitWebauthnResultsInFlight, PaymentKitWebauthnResultsPaymentSucceeded, PaymentKitWebauthnSideEffects, PaymentKitWebauthnSideEffectsConfirmPayment, PaymentKitWebauthnSideEffectsIdle, PaymentKitWebauthnSideEffectsPaymentSucceeded, PaymentKitWebauthnState, PaymentKitWebauthnStateError, PaymentKitWebauthnStateIdle, PaymentKitWebauthnStateLoading, PaymentKitAbstractViewModel, PaymentKitCFlow<T>, PaymentKitViewModel<A, R, S, E>, PaymentKitVerifyUserBiometrics, PaymentKitLauncherActions, PaymentKitLauncherActionsStartPayment, PaymentKitLauncherPresentationDI, PaymentKitLauncherResultsAuthBiometrics, PaymentKitLauncherResultsError, PaymentKitLauncherResultsInFlight, PaymentKitLauncherResultsOtpAndBiometricsRegistrationRequired, PaymentKitLauncherResultsPaymentMethodMissing, PaymentKitLauncherResultsPhoneNumberRequired, PaymentKitLauncherSideEffects, PaymentKitLauncherSideEffectsAddRequiredPaymentMethod, PaymentKitLauncherSideEffectsAuthBiometrics, PaymentKitLauncherSideEffectsIdle, PaymentKitLauncherSideEffectsRegisterUserWithPhoneNumber, PaymentKitLauncherSideEffectsVerifyOtpAndRegisterBiometrics, PaymentKitLauncherState, PaymentKitLauncherStateError, PaymentKitLauncherStateIdle, PaymentKitLauncherStateLoading, PaymentKitCreateTransaction, PaymentKitGetSessionId, PaymentKitGetUserAuthStateInteractor, PaymentKitSavePhoneNumber, PaymentKitPhoneNumberActions, PaymentKitPhoneNumberActionsSubmitPhoneNumber, PaymentKitPhoneNumberEffects, PaymentKitPhoneNumberEffectsAddCard, PaymentKitPhoneNumberEffectsIdle, PaymentKitPhoneNumberEffectsOtpAndRegisterBiometrics, PaymentKitPhoneNumberEffectsTakeBiometrics, PaymentKitPhoneNumberResults, PaymentKitPhoneNumberResultsAddCard, PaymentKitPhoneNumberResultsAuthBiometrics, PaymentKitPhoneNumberResultsError, PaymentKitPhoneNumberResultsInFlight, PaymentKitPhoneNumberResultsOtpAndRegisterBiometrics, PaymentKitPhoneNumberState, PaymentKitPhoneNumberStateError, PaymentKitPhoneNumberStateIdle, PaymentKitPhoneNumberStateLoading, PaymentKitPhoneNumberController, PaymentKitOtpActionsEditPhoneNumber, PaymentKitOtpActionsResend, PaymentKitOtpActionsSendOtp, PaymentKitOtpEffectsAddCard, PaymentKitOtpEffectsChangePhoneNumber, PaymentKitOtpEffectsIdle, PaymentKitOtpEffectsRequestOtpFocus, PaymentKitOtpEffectsShowSuccessResend, PaymentKitOtpEffectsTakeBiometrics, PaymentKitOtpResultsChangePhoneNumber, PaymentKitOtpResultsCompleteProfile, PaymentKitOtpResultsError, PaymentKitOtpResultsIdle, PaymentKitOtpResultsInFlight, PaymentKitOtpResultsPhoneNumber, PaymentKitOtpResultsRequestFocus, PaymentKitOtpResultsResendInFlight, PaymentKitOtpResultsResentedCode, PaymentKitOtpState, PaymentKitVerifyOtp, PaymentKitSendOtp, PaymentKitGetPhoneNumber, PaymentKitOTPElement, PaymentKitPhoneNumberPresentationDI, PaymentKitCardsActions, PaymentKitCardsActionsAddCard, PaymentKitCardsActionsConfirmPayment, PaymentKitCardsActionsGetCards, PaymentKitCardsActionsRedirectionUrlLoaded, PaymentKitCardsEffects, PaymentKitCardsEffectsIdle, PaymentKitCardsEffectsPaymentSucceeded, PaymentKitCardsEffectsRequireAddingNewCard, PaymentKitCardsEffectsVerifyOtpAndSignIn, PaymentKitCardsPresentationDI, PaymentKitCard, PaymentKitCardsResultsCards, PaymentKitCardsResultsError, PaymentKitCardsResultsIdle, PaymentKitCardsResultsInFlight, PaymentKitCardsResultsRedirect3Ds, PaymentKitCardsResultsRequireAddingNewCard, PaymentKitCardsResultsSuccessPayment, PaymentKitCardsResultsVerifyOtpAndSignIn, PaymentKitCardsState, PaymentKitCardsStateCards, PaymentKitCardsStateError, PaymentKitCardsStateIdle, PaymentKitCardsStateLoading, PaymentKitCardsStateRedirect3Ds, PaymentKitGetCards, PaymentKitAddCardUseCase, PaymentKitConfirmPaymentUseCase, PaymentKitDetectSuccessStepFromUrl, PaymentKitCheckIfUserIsSignedIn, PaymentKitCardDetailsSectionController, PaymentKitSuccessActions, PaymentKitSuccessActionsGetTransactionInfo, PaymentKitSuccessPresentationDI, PaymentKitSuccessResults, PaymentKitSuccessResultsError, PaymentKitSuccessResultsInFlight, PaymentKitTransaction, PaymentKitSuccessResultsTransactionInfo, PaymentKitSuccessSideEffects, PaymentKitSuccessSideEffectsFailed, PaymentKitSuccessSideEffectsIdle, PaymentKitSuccessSideEffectsSuccess, PaymentKitSuccessState, PaymentKitSuccessStateError, PaymentKitSuccessStateIdle, PaymentKitSuccessStateLoading, PaymentKitSuccessStateTransactionInfo, PaymentKitGetTransactionStatus, PaymentKitIdentifierSpec, PaymentKitSectionMultiFieldElement, PaymentKitAddressRepository, PaymentKitAddressType, PaymentKitDropdownFieldController, PaymentKitSameAsShippingElement, PaymentKitAddressController, PaymentKitCountryElement, PaymentKitFormItemSpecCompanion, PaymentKitFormItemSpec, PaymentKitDisplayField, PaymentKitAddressSpecCompanion, PaymentKitAddressSpec, PaymentKitSectionElement, PaymentKitKeyboardType, PaymentKitPhoneNumberState_, PaymentKitAddressTypeNormal, PaymentKitAddressTypeShippingCondensed, PaymentKitAddressTypeShippingExpanded, PaymentKitAdministrativeAreaConfigCountry, PaymentKitKotlinPair<__covariant A, __covariant B>, PaymentKitAdministrativeAreaConfigCountryCanada, PaymentKitAdministrativeAreaConfigCountryUS, PaymentKitSectionSingleFieldElement, PaymentKitAdministrativeAreaElement, PaymentKitKotlinEnumCompanion, PaymentKitKotlinEnum<E>, PaymentKitCapitalizationCompanion, PaymentKitCapitalization, PaymentKitKotlinArray<T>, PaymentKitAddressElement, PaymentKitCardBillingSpecCompanion, PaymentKitCardBillingSpec, PaymentKitCvcElement, PaymentKitSimpleTextElement, PaymentKitCardNumberElement, PaymentKitCardDetailsController, PaymentKitCardDetailsElement, PaymentKitFormElement, PaymentKitCardDetailsSectionSpecCompanion, PaymentKitCardDetailsSectionSpec, PaymentKitCardBrand, PaymentKitCardNumberController, PaymentKitCardNumberConfig, PaymentKitCardAccountRangeService, PaymentKitCountryCode, PaymentKitCountry, PaymentKitCountryCodeCompanion, PaymentKitCountryConfigCompanion, PaymentKitCountrySpecCompanion, PaymentKitCountrySpec, PaymentKitCountryUtils, PaymentKitCvcConfig, PaymentKitCvcController, PaymentKitDateConfigCompanion, PaymentKitDisplayFieldCompanion, PaymentKitDropdownItemSpecCompanion, PaymentKitDropdownItemSpec, PaymentKitTranslationId, PaymentKitDropdownSpecCompanion, PaymentKitDropdownSpec, PaymentKitEmptyFormElement, PaymentKitFormFieldEntry, PaymentKitKotlinx_serialization_jsonJsonElement, PaymentKitKotlinx_serialization_jsonJsonContentPolymorphicSerializer<T>, PaymentKitFormItemSpecSerializer, PaymentKitIdentifierSpecCompanion, PaymentKitKeyboardTypeCompanion, PaymentKitLayoutSpecCompanion, PaymentKitLayoutSpec, PaymentKitNameSpecCompanion, PaymentKitNameSpec, PaymentKitOTPController, PaymentKitOTPSpec, PaymentKitPaymentScreen, PaymentKitPaymentScreenAddCard, PaymentKitPaymentScreenBiometrics, PaymentKitPaymentScreenEditCard, PaymentKitPaymentScreenLauncher, PaymentKitPaymentScreenOtp, PaymentKitPaymentScreenPaymentConfirmation, PaymentKitPaymentScreenPaymentMethods, PaymentKitPaymentScreenPhoneNumber, PaymentKitPaymentScreenSuccess, PaymentKitPhoneNumberControllerCompanion, PaymentKitKotlinUnit, PaymentKitPhoneNumberElement, PaymentKitPhoneNumberFormatterCompanion, PaymentKitPhoneNumberFormatter, PaymentKitKotlinCharRange, PaymentKitPhoneNumberFormatterMetadata, PaymentKitPhoneNumberState_Companion, PaymentKitStep, PaymentKitProgressStepperControllerCompanion, PaymentKitProgressStepperController, PaymentKitRowController, PaymentKitSameAsShippingController, PaymentKitSaveForFutureUseController, PaymentKitSaveForFutureUseElement, PaymentKitSaveForFutureUseSpecCompanion, PaymentKitSaveForFutureUseSpec, PaymentKitSectionController, PaymentKitSectionElementCompanion, PaymentKitSimpleDropdownElement, PaymentKitSimpleTextFieldConfigCompanion, PaymentKitSimpleTextFieldConfig, PaymentKitSimpleTextFieldControllerCompanion, PaymentKitSimpleTextFieldController, PaymentKitSimpleTextSpecCompanion, PaymentKitSimpleTextSpec, PaymentKitStaticTextElement, PaymentKitTextFieldIcon, PaymentKitTextFieldIconTrailing, PaymentKitTextFieldIconMultiTrailing, PaymentKitFieldError, PaymentKitTranslationIdCompanion, PaymentKitAccountRange, PaymentKitBinRange, PaymentKitAccountRangeBrandInfo, PaymentKitAddressCompanion, PaymentKitAddress, PaymentKitAddressBuilder, PaymentKitCardNumberUnvalidated, PaymentKitCard_Companion, PaymentKitCard_, PaymentKitCardBrandCompanion, PaymentKitCardUtils, PaymentKitCvcCheckCompanion, PaymentKitCvcCheck, PaymentKitStepPayment, PaymentKitStepVerification, PaymentKitBinCompanion, PaymentKitBin, PaymentKitCardNumberCompanion, PaymentKitCardNumber, PaymentKitCardNumberValidated, PaymentKitComponents_resourcesResourceReader, PaymentKitAddressRepositoryCompanion, PaymentKitGetTransactionId, PaymentKitCheckIfUserHasBiometricsRegistered, PaymentKitUserRegistration, PaymentKitUserDomainDI, PaymentKitRegistrationStepCards, PaymentKitRegistrationStepNothing, PaymentKitUserAddress, PaymentKitUserCard, PaymentKitUserCheckout, PaymentKitUserClientAddress, PaymentKitUser, PaymentKitUserCardBillingDetails, PaymentKitUserCardDetails, PaymentKitUserAuthStateEmpty, PaymentKitUserAuthStateRequiresBiometricAuth, PaymentKitUserAuthStateRequiresOtpAndBiometricRegistration, PaymentKitUserAuthStateRequiresPaymentMethod, PaymentKitUserAuthStateRequiresPhoneNumber, PaymentKitUserRegistrationTransactionStatus, PaymentKitUserRegistrationWebauth, PaymentKitUserRegistrationWebauthAllowCredential, PaymentKitWebauthnDomainDI, PaymentKitIsTransactionSucceeded, PaymentKitSaveTransaction, PaymentKitAddCard, PaymentKitChooseCard, PaymentKitCardsDomainDI, PaymentKitAddedCardResultBilling, PaymentKitAddedCardResultCard, PaymentKitAddedCardResultCustomParameters, PaymentKitAddedCardResultCustomer, PaymentKitAddedCardResultRedirect, PaymentKitAddedCardResultResult, PaymentKitAddedCardResultResultDetails, PaymentKitAddedCardResultRisk, PaymentKitAddedCardResult, PaymentKitAddedCardResultCustomerBrowser, PaymentKitAddedCardResultRedirectParameter, PaymentKitCardBillingDetails, PaymentKitCardDetails, PaymentKitTransactionTransactionStatus, PaymentKitTransactionDomainDI, PaymentKitPhoneNumberDomainDI, PaymentKitKotlinCancellationException, PaymentKitJobSupport, PaymentKitCoroutineStart, PaymentKitCoroutineDispatcher, PaymentKitKotlinAbstractCoroutineContextElement, PaymentKitCoroutineDispatcherKey, PaymentKitKotlinException, PaymentKitKotlinRuntimeException, PaymentKitKotlinAbstractCoroutineContextKey<B, E>, PaymentKitCoroutineExceptionHandlerKey, PaymentKitCoroutineNameKey, PaymentKitCoroutineName, PaymentKitDispatchers, PaymentKitMainCoroutineDispatcher, PaymentKitGlobalScope, PaymentKitJobKey, PaymentKitNonCancellable, PaymentKitNonDisposableHandle, PaymentKitKotlinIllegalStateException, PaymentKitTimeoutCancellationException, PaymentKitBufferOverflow, PaymentKitChannelFactory, PaymentKitKotlinNoSuchElementException, PaymentKitSharingCommand, PaymentKitSharingStartedCompanion, PaymentKitChannelFlow<T>, PaymentKitAtomicOp<__contravariant T>, PaymentKitOpDescriptor, PaymentKitLockFreeLinkedListNode, PaymentKitAtomicfuSynchronizedObjectLockState, PaymentKitKotlinAtomicReference<T>, PaymentKitAtomicfuSynchronizedObject, PaymentKitThreadSafeHeap<T>, PaymentKitCardsViewModel, PaymentKitLauncherViewModel, PaymentKitOtpViewModel, PaymentKitPhoneNumberViewModel, PaymentKitSuccessViewModel, PaymentKitWebauthnViewModel, NSError, PaymentKitCardNumberEditableController, PaymentKitKotlinIntIterator, PaymentKitKotlinIntArray, PaymentKitKotlinLongIterator, PaymentKitKotlinLongArray, PaymentKitKotlinIntProgressionCompanion, PaymentKitKotlinIntProgression, PaymentKitKotlinIntRangeCompanion, PaymentKitKotlinIntRange, PaymentKitKotlinLongProgressionCompanion, PaymentKitKotlinLongProgression, PaymentKitKotlinLongRangeCompanion, PaymentKitKotlinLongRange, PaymentKitKotlinx_serialization_jsonJson, PaymentKitKotlinNothing, PaymentKitCloseableCoroutineDispatcher, PaymentKitKtor_client_coreHttpRequestData, PaymentKitKtor_client_coreHttpResponseData, PaymentKitKtor_client_coreHttpClientEngineConfig, PaymentKitKtor_client_coreHttpClientConfig<T>, PaymentKitKtor_eventsEvents, PaymentKitKtor_client_coreHttpReceivePipeline, PaymentKitKtor_client_coreHttpRequestPipeline, PaymentKitKtor_client_coreHttpResponsePipeline, PaymentKitKtor_client_coreHttpSendPipeline, PaymentKitKoin_coreInstanceFactory<T>, PaymentKitKoin_coreScope, PaymentKitKoin_coreParametersHolder, PaymentKitKoin_coreScopeDSL, PaymentKitKoin_coreSingleInstanceFactory<T>, PaymentKitTransaction_dataSessionCacheCompanion, PaymentKitUser_dataRawIdCacheCompanion, PaymentKitUser_dataPhoneNumberCacheCompanion, PaymentKitKotlinx_serialization_coreSerializersModule, PaymentKitKotlinx_serialization_coreSerialKind, PaymentKitKotlinx_serialization_jsonJsonElementCompanion, PaymentKitKotlinCharProgressionCompanion, PaymentKitKotlinCharIterator, PaymentKitKotlinCharProgression, PaymentKitKotlinCharRangeCompanion, PaymentKitAtomicfuSynchronizedObjectStatus, PaymentKitKotlinx_serialization_jsonJsonDefault, PaymentKitKotlinx_serialization_jsonJsonConfiguration, PaymentKitKtor_httpUrl, PaymentKitKtor_httpHttpMethod, PaymentKitKtor_httpOutgoingContent, PaymentKitKtor_httpHttpStatusCode, PaymentKitKtor_utilsGMTDate, PaymentKitKtor_httpHttpProtocolVersion, PaymentKitKtor_client_coreProxyConfig, PaymentKitKtor_utilsAttributeKey<T>, PaymentKitKtor_eventsEventDefinition<T>, PaymentKitKtor_utilsPipelinePhase, PaymentKitKtor_utilsPipeline<TSubject, TContext>, PaymentKitKtor_client_coreHttpReceivePipelinePhases, PaymentKitKtor_client_coreHttpResponse, PaymentKitKtor_client_coreHttpRequestPipelinePhases, PaymentKitKtor_client_coreHttpRequestBuilder, PaymentKitKtor_client_coreHttpResponsePipelinePhases, PaymentKitKtor_client_coreHttpResponseContainer, PaymentKitKtor_client_coreHttpClientCall, PaymentKitKtor_client_coreHttpSendPipelinePhases, PaymentKitKoin_coreLockable, PaymentKitKoin_coreBeanDefinition<T>, PaymentKitKoin_coreInstanceFactoryCompanion, PaymentKitKoin_coreInstanceContext, PaymentKitKoin_coreKoin, PaymentKitKotlinLazyThreadSafetyMode, PaymentKitKoin_coreLogger, PaymentKitKoin_coreParametersHolderCompanion, PaymentKitKtor_httpUrlCompanion, PaymentKitKtor_httpURLProtocol, PaymentKitKtor_httpHttpMethodCompanion, PaymentKitKtor_httpContentType, PaymentKitKtor_httpHttpStatusCodeCompanion, PaymentKitKtor_utilsGMTDateCompanion, PaymentKitKtor_utilsWeekDay, PaymentKitKtor_utilsMonth, PaymentKitKtor_httpHttpProtocolVersionCompanion, PaymentKitKtor_httpHeadersBuilder, PaymentKitKtor_client_coreHttpRequestBuilderCompanion, PaymentKitKtor_httpURLBuilder, PaymentKitKtor_utilsTypeInfo, PaymentKitKtor_client_coreHttpClientCallCompanion, PaymentKitKoin_coreKind, PaymentKitKoin_coreCallbacks<T>, PaymentKitKoin_coreInstanceRegistry, PaymentKitKoin_corePropertyRegistry, PaymentKitKoin_coreScopeRegistry, PaymentKitKoin_coreLevel, PaymentKitKtor_httpURLProtocolCompanion, PaymentKitKtor_httpHeaderValueParam, PaymentKitKtor_httpHeaderValueWithParametersCompanion, PaymentKitKtor_httpHeaderValueWithParameters, PaymentKitKtor_httpContentTypeCompanion, PaymentKitKtor_utilsWeekDayCompanion, PaymentKitKtor_utilsMonthCompanion, PaymentKitKtor_ioMemory, PaymentKitKtor_ioChunkBuffer, PaymentKitKotlinByteArray, PaymentKitKtor_ioBuffer, PaymentKitKtor_ioByteReadPacket, PaymentKitKtor_utilsStringValuesBuilderImpl, PaymentKitKtor_httpURLBuilderCompanion, PaymentKitKoin_coreScopeRegistryCompanion, PaymentKitKtor_ioMemoryCompanion, PaymentKitKtor_ioBufferCompanion, PaymentKitKtor_ioChunkBufferCompanion, PaymentKitKotlinByteIterator, PaymentKitKtor_ioInputCompanion, PaymentKitKtor_ioInput, PaymentKitKtor_ioByteReadPacketCompanion, PaymentKitKotlinKTypeProjection, PaymentKitKotlinKVariance, PaymentKitKotlinKTypeProjectionCompanion;

@protocol PaymentKitKtor_client_coreHttpClientEngine, PaymentKitFlow, PaymentKitWebauthnRepository, PaymentKitWebauthnProxy, PaymentKitKotlinx_serialization_coreKSerializer, PaymentKitMultiplatform_settingsSettings, PaymentKitAction, PaymentKitWebauthnActions, PaymentKitResult, PaymentKitEffect, PaymentKitState, PaymentKitCoroutineScope, PaymentKitLauncherResults, PaymentKitOtpActions, PaymentKitOtpEffects, PaymentKitOtpResults, PaymentKitCardsResults, PaymentKitStateFlow, PaymentKitFlowCollector, PaymentKitCloseable, PaymentKitController, PaymentKitSectionFieldErrorController, PaymentKitSectionFieldElement, PaymentKitTextFieldState, PaymentKitInputController, PaymentKitTextFieldController, PaymentKitTextFieldConfig, PaymentKitDropdownConfig, PaymentKitKotlinComparable, PaymentKitKotlinCoroutineContext, PaymentKitStaticCardAccountRanges, PaymentKitKotlinx_serialization_coreEncoder, PaymentKitKotlinx_serialization_coreSerialDescriptor, PaymentKitKotlinx_serialization_coreSerializationStrategy, PaymentKitKotlinx_serialization_coreDecoder, PaymentKitKotlinx_serialization_coreDeserializationStrategy, PaymentKitKotlinKClass, PaymentKitMutableStateFlow, PaymentKitCardAccountRangeRepository, PaymentKitCardAccountRangeServiceAccountRangeResultListener, PaymentKitJob, PaymentKitUserRepository, PaymentKitRegistrationStep, PaymentKitUserAuthState, PaymentKitCardsRepository, PaymentKitTransactionRepository, PaymentKitPhoneNumberRepository, PaymentKitChildHandle, PaymentKitChildJob, PaymentKitDisposableHandle, PaymentKitKotlinSequence, PaymentKitSelectClause0, PaymentKitKotlinCoroutineContextKey, PaymentKitKotlinCoroutineContextElement, PaymentKitParentJob, PaymentKitSelectClause1, PaymentKitKotlinContinuation, PaymentKitKotlinSuspendFunction1, PaymentKitKotlinContinuationInterceptor, PaymentKitRunnable, PaymentKitDeferred, PaymentKitKotlinSuspendFunction0, PaymentKitCancellableContinuation, PaymentKitCopyableThrowable, PaymentKitReceiveChannel, PaymentKitSelectClause2, PaymentKitSendChannel, PaymentKitChannelIterator, PaymentKitBroadcastChannel, PaymentKitSharedFlow, PaymentKitMutableSharedFlow, PaymentKitSharingStarted, PaymentKitFusibleFlow, PaymentKitProducerScope, PaymentKitSelectInstance, PaymentKitSelectClause, PaymentKitMainDispatcherFactory, PaymentKitPlatform, PaymentKitKotlinIterator, PaymentKitKotlinIterable, PaymentKitKotlinClosedRange, PaymentKitKotlinOpenEndRange, PaymentKitCompletableJob, PaymentKitCompletableDeferred, PaymentKitCoroutineExceptionHandler, PaymentKitChannel, PaymentKitKotlinSuspendFunction2, PaymentKitKotlinSuspendFunction3, PaymentKitKotlinSuspendFunction5, PaymentKitKotlinSuspendFunction4, PaymentKitKotlinSuspendFunction6, PaymentKitSelectBuilder, PaymentKitMutex, PaymentKitSemaphore, PaymentKitKtor_client_coreHttpClientEngineCapability, PaymentKitKtor_ioCloseable, PaymentKitKtor_utilsAttributes, PaymentKitKoin_coreQualifier, PaymentKitKotlinx_serialization_coreCompositeEncoder, PaymentKitKotlinAnnotation, PaymentKitKotlinx_serialization_coreCompositeDecoder, PaymentKitKotlinKDeclarationContainer, PaymentKitKotlinKAnnotatedElement, PaymentKitKotlinKClassifier, PaymentKitKotlinFunction, PaymentKitKotlinx_serialization_coreSerialFormat, PaymentKitKotlinx_serialization_coreStringFormat, PaymentKitKtor_httpHeaders, PaymentKitKtor_client_coreHttpClientPlugin, PaymentKitKotlinLazy, PaymentKitKoin_coreScopeCallback, PaymentKitKotlinx_serialization_coreSerializersModuleCollector, PaymentKitKotlinx_serialization_jsonJsonNamingStrategy, PaymentKitKtor_httpParameters, PaymentKitKotlinMapEntry, PaymentKitKtor_utilsStringValues, PaymentKitKtor_httpHttpMessage, PaymentKitKtor_ioByteReadChannel, PaymentKitKtor_httpHttpMessageBuilder, PaymentKitKtor_client_coreHttpRequest, PaymentKitKoin_coreKoinScopeComponent, PaymentKitKtor_ioReadSession, PaymentKitKotlinAppendable, PaymentKitKtor_utilsStringValuesBuilder, PaymentKitKtor_httpParametersBuilder, PaymentKitKotlinKType, PaymentKitKoin_coreKoinComponent, PaymentKitKtor_ioObjectPool;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface PaymentKitBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface PaymentKitBase (PaymentKitBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface PaymentKitMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface PaymentKitMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorPaymentKitKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface PaymentKitNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface PaymentKitByte : PaymentKitNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface PaymentKitUByte : PaymentKitNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface PaymentKitShort : PaymentKitNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface PaymentKitUShort : PaymentKitNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface PaymentKitInt : PaymentKitNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface PaymentKitUInt : PaymentKitNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface PaymentKitLong : PaymentKitNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface PaymentKitULong : PaymentKitNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface PaymentKitFloat : PaymentKitNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface PaymentKitDouble : PaymentKitNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface PaymentKitBoolean : PaymentKitNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("HostUrlProvider")))
@interface PaymentKitHostUrlProvider : PaymentKitBase
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClient")))
@interface PaymentKitHttpClient : PaymentKitBase
- (instancetype)initWithMerchantId:(NSString *)merchantId userAgent:(NSString *)userAgent token:(PaymentKitTokenCache *)token engine:(id<PaymentKitKtor_client_coreHttpClientEngine>)engine hostUrlProvider:(PaymentKitHostUrlProvider *)hostUrlProvider isDebug:(BOOL)isDebug __attribute__((swift_name("init(merchantId:userAgent:token:engine:hostUrlProvider:isDebug:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitKtor_client_coreHttpClient *)get __attribute__((swift_name("get()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpClientDI")))
@interface PaymentKitHttpClientDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)httpClientDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitHttpClientDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HttpEngine")))
@interface PaymentKitHttpEngine : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)httpEngine __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitHttpEngine *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKtor_client_coreHttpClientEngine>)instanceTimeout:(int64_t)timeout __attribute__((swift_name("instance(timeout:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebAuthnDI")))
@interface PaymentKitWebAuthnDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webAuthnDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebAuthnDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("WebauthnRepository")))
@protocol PaymentKitWebauthnRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("auth(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkIfUserHasBiometricsRegisteredWithCompletionHandler:(void (^)(PaymentKitBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkIfUserHasBiometricsRegistered(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnRepositoryImpl")))
@interface PaymentKitWebauthnRepositoryImpl : PaymentKitBase <PaymentKitWebauthnRepository>
- (instancetype)initWithWebAuthnProxy:(id<PaymentKitWebauthnProxy>)webAuthnProxy webAuthnHttp:(PaymentKitWebAuthnHttp *)webAuthnHttp sessionCache:(PaymentKitTransaction_dataSessionCache *)sessionCache rawIdCache:(PaymentKitUser_dataRawIdCache *)rawIdCache phoneNumberCache:(PaymentKitUser_dataPhoneNumberCache *)phoneNumberCache getUserByPhoneNumber:(PaymentKitGetUserByPhoneNumber *)getUserByPhoneNumber __attribute__((swift_name("init(webAuthnProxy:webAuthnHttp:sessionCache:rawIdCache:phoneNumberCache:getUserByPhoneNumber:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("auth(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)checkIfUserHasBiometricsRegisteredWithCompletionHandler:(void (^)(PaymentKitBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("checkIfUserHasBiometricsRegistered(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("register(completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationRequestApi")))
@interface PaymentKitRegistrationRequestApi : PaymentKitBase
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("init(phoneNumber:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitRegistrationRequestApiCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitRegistrationRequestApi *)doCopyPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("doCopy(phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationRequestApi.Companion")))
@interface PaymentKitRegistrationRequestApiCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitRegistrationRequestApiCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebAuthnHttp")))
@interface PaymentKitWebAuthnHttp : PaymentKitBase
- (instancetype)initWithHttpClient:(PaymentKitKtor_client_coreHttpClient *)httpClient __attribute__((swift_name("init(httpClient:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitWebAuthnHttpCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authAuthenticationPublicKey:(PaymentKitAuthenticationPublicKey *)authenticationPublicKey sessionId:(NSString *)sessionId completionHandler:(void (^)(PaymentKitRegistrationVerifyResponseApi * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("auth(authenticationPublicKey:sessionId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getRegistrationCreationOptionsPhoneNumber:(NSString *)phoneNumber sessionId:(NSString *)sessionId completionHandler:(void (^)(PaymentKitCreationOptions * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getRegistrationCreationOptions(phoneNumber:sessionId:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyRegistrationRegistrationPublicKey:(PaymentKitRegistrationPublicKey *)registrationPublicKey sessionId:(NSString *)sessionId completionHandler:(void (^)(PaymentKitRegistrationVerifyResponseApi * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyRegistration(registrationPublicKey:sessionId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebAuthnHttp.Companion")))
@interface PaymentKitWebAuthnHttpCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebAuthnHttpCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *WEBAUTHN_AUTH_PATH __attribute__((swift_name("WEBAUTHN_AUTH_PATH")));
@property (readonly) NSString *WEBAUTHN_REGISTER_PATH __attribute__((swift_name("WEBAUTHN_REGISTER_PATH")));
@property (readonly) NSString *WEBAUTHN_VERIFY_REGISTRATION_PATH __attribute__((swift_name("WEBAUTHN_VERIFY_REGISTRATION_PATH")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions")))
@interface PaymentKitCreationOptions : PaymentKitBase
- (instancetype)initWithChallenge:(NSString *)challenge relyingParty:(PaymentKitCreationOptionsRelyingParty *)relyingParty user:(PaymentKitCreationOptionsUser *)user timeout:(NSString *)timeout attestation:(NSString *)attestation publicKeys:(NSArray<PaymentKitCreationOptionsPublicKeyCredentials *> *)publicKeys authenticator:(PaymentKitCreationOptionsAuthenticator *)authenticator __attribute__((swift_name("init(challenge:relyingParty:user:timeout:attestation:publicKeys:authenticator:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCreationOptionsCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitCreationOptions *)doCopyChallenge:(NSString *)challenge relyingParty:(PaymentKitCreationOptionsRelyingParty *)relyingParty user:(PaymentKitCreationOptionsUser *)user timeout:(NSString *)timeout attestation:(NSString *)attestation publicKeys:(NSArray<PaymentKitCreationOptionsPublicKeyCredentials *> *)publicKeys authenticator:(PaymentKitCreationOptionsAuthenticator *)authenticator __attribute__((swift_name("doCopy(challenge:relyingParty:user:timeout:attestation:publicKeys:authenticator:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *attestation __attribute__((swift_name("attestation")));
@property (readonly) PaymentKitCreationOptionsAuthenticator *authenticator __attribute__((swift_name("authenticator")));
@property (readonly) NSString *challenge __attribute__((swift_name("challenge")));
@property (readonly) NSArray<PaymentKitCreationOptionsPublicKeyCredentials *> *publicKeys __attribute__((swift_name("publicKeys")));
@property (readonly) PaymentKitCreationOptionsRelyingParty *relyingParty __attribute__((swift_name("relyingParty")));
@property (readonly) NSString *timeout __attribute__((swift_name("timeout")));
@property (readonly) PaymentKitCreationOptionsUser *user __attribute__((swift_name("user")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions.Authenticator")))
@interface PaymentKitCreationOptionsAuthenticator : PaymentKitBase
- (instancetype)initWithAttachment:(NSString *)attachment residentKey:(NSString *)residentKey __attribute__((swift_name("init(attachment:residentKey:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCreationOptionsAuthenticatorCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitCreationOptionsAuthenticator *)doCopyAttachment:(NSString *)attachment residentKey:(NSString *)residentKey __attribute__((swift_name("doCopy(attachment:residentKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *attachment __attribute__((swift_name("attachment")));
@property (readonly) NSString *residentKey __attribute__((swift_name("residentKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions.AuthenticatorCompanion")))
@interface PaymentKitCreationOptionsAuthenticatorCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCreationOptionsAuthenticatorCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions.Companion")))
@interface PaymentKitCreationOptionsCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCreationOptionsCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions.PublicKeyCredentials")))
@interface PaymentKitCreationOptionsPublicKeyCredentials : PaymentKitBase
- (instancetype)initWithType:(NSString *)type algorithm:(int32_t)algorithm __attribute__((swift_name("init(type:algorithm:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCreationOptionsPublicKeyCredentialsCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitCreationOptionsPublicKeyCredentials *)doCopyType:(NSString *)type algorithm:(int32_t)algorithm __attribute__((swift_name("doCopy(type:algorithm:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t algorithm __attribute__((swift_name("algorithm")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions.PublicKeyCredentialsCompanion")))
@interface PaymentKitCreationOptionsPublicKeyCredentialsCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCreationOptionsPublicKeyCredentialsCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions.RelyingParty")))
@interface PaymentKitCreationOptionsRelyingParty : PaymentKitBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCreationOptionsRelyingPartyCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitCreationOptionsRelyingParty *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions.RelyingPartyCompanion")))
@interface PaymentKitCreationOptionsRelyingPartyCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCreationOptionsRelyingPartyCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions.User")))
@interface PaymentKitCreationOptionsUser : PaymentKitBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name displayName:(NSString * _Nullable)displayName __attribute__((swift_name("init(id:name:displayName:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCreationOptionsUserCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitCreationOptionsUser *)doCopyId:(NSString *)id name:(NSString *)name displayName:(NSString * _Nullable)displayName __attribute__((swift_name("doCopy(id:name:displayName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreationOptions.UserCompanion")))
@interface PaymentKitCreationOptionsUserCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCreationOptionsUserCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationPublicKey")))
@interface PaymentKitRegistrationPublicKey : PaymentKitBase
- (instancetype)initWithId:(NSString *)id rawId:(NSString *)rawId type:(NSString *)type response:(PaymentKitRegistrationPublicKeyResponse *)response __attribute__((swift_name("init(id:rawId:type:response:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitRegistrationPublicKeyCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitRegistrationPublicKey *)doCopyId:(NSString *)id rawId:(NSString *)rawId type:(NSString *)type response:(PaymentKitRegistrationPublicKeyResponse *)response __attribute__((swift_name("doCopy(id:rawId:type:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *rawId __attribute__((swift_name("rawId")));
@property (readonly) PaymentKitRegistrationPublicKeyResponse *response __attribute__((swift_name("response")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationPublicKey.Companion")))
@interface PaymentKitRegistrationPublicKeyCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitRegistrationPublicKeyCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationPublicKey.Response")))
@interface PaymentKitRegistrationPublicKeyResponse : PaymentKitBase
- (instancetype)initWithClient:(NSString *)client attestation:(NSString *)attestation __attribute__((swift_name("init(client:attestation:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitRegistrationPublicKeyResponseCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitRegistrationPublicKeyResponse *)doCopyClient:(NSString *)client attestation:(NSString *)attestation __attribute__((swift_name("doCopy(client:attestation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *attestation __attribute__((swift_name("attestation")));
@property (readonly) NSString *client __attribute__((swift_name("client")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationPublicKey.ResponseCompanion")))
@interface PaymentKitRegistrationPublicKeyResponseCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitRegistrationPublicKeyResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationVerifyResponseApi")))
@interface PaymentKitRegistrationVerifyResponseApi : PaymentKitBase
- (instancetype)initWithVerified:(BOOL)verified __attribute__((swift_name("init(verified:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitRegistrationVerifyResponseApiCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitRegistrationVerifyResponseApi *)doCopyVerified:(BOOL)verified __attribute__((swift_name("doCopy(verified:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL verified __attribute__((swift_name("verified")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationVerifyResponseApi.Companion")))
@interface PaymentKitRegistrationVerifyResponseApiCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitRegistrationVerifyResponseApiCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AssertionOptions")))
@interface PaymentKitAssertionOptions : PaymentKitBase
- (instancetype)initWithChallenge:(NSString *)challenge relyingPartyId:(NSString *)relyingPartyId __attribute__((swift_name("init(challenge:relyingPartyId:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAssertionOptions *)doCopyChallenge:(NSString *)challenge relyingPartyId:(NSString *)relyingPartyId __attribute__((swift_name("doCopy(challenge:relyingPartyId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *challenge __attribute__((swift_name("challenge")));
@property (readonly) NSString *relyingPartyId __attribute__((swift_name("relyingPartyId")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationPublicKey")))
@interface PaymentKitAuthenticationPublicKey : PaymentKitBase
- (instancetype)initWithId:(NSString *)id rawId:(NSString *)rawId type:(NSString *)type response:(PaymentKitAuthenticationPublicKeyResponse *)response cardType:(NSString *)cardType sessionId:(NSString *)sessionId __attribute__((swift_name("init(id:rawId:type:response:cardType:sessionId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitAuthenticationPublicKeyCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitAuthenticationPublicKey *)doCopyId:(NSString *)id rawId:(NSString *)rawId type:(NSString *)type response:(PaymentKitAuthenticationPublicKeyResponse *)response cardType:(NSString *)cardType sessionId:(NSString *)sessionId __attribute__((swift_name("doCopy(id:rawId:type:response:cardType:sessionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cardType __attribute__((swift_name("cardType")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *rawId __attribute__((swift_name("rawId")));
@property (readonly) PaymentKitAuthenticationPublicKeyResponse *response __attribute__((swift_name("response")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationPublicKey.Companion")))
@interface PaymentKitAuthenticationPublicKeyCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitAuthenticationPublicKeyCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationPublicKey.Response")))
@interface PaymentKitAuthenticationPublicKeyResponse : PaymentKitBase
- (instancetype)initWithUserHandle:(NSString * _Nullable)userHandle signature:(NSString *)signature assertionDataJSON:(NSString *)assertionDataJSON __attribute__((swift_name("init(userHandle:signature:assertionDataJSON:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitAuthenticationPublicKeyResponseCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitAuthenticationPublicKeyResponse *)doCopyUserHandle:(NSString * _Nullable)userHandle signature:(NSString *)signature assertionDataJSON:(NSString *)assertionDataJSON __attribute__((swift_name("doCopy(userHandle:signature:assertionDataJSON:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *assertionDataJSON __attribute__((swift_name("assertionDataJSON")));
@property (readonly) NSString *signature __attribute__((swift_name("signature")));
@property (readonly) NSString * _Nullable userHandle __attribute__((swift_name("userHandle")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AuthenticationPublicKey.ResponseCompanion")))
@interface PaymentKitAuthenticationPublicKeyResponseCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitAuthenticationPublicKeyResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("WebauthnProxy")))
@protocol PaymentKitWebauthnProxy
@required
- (void)registerUserCreationOptions:(PaymentKitCreationOptions *)creationOptions result:(void (^)(PaymentKitRegistrationPublicKey *))result error:(void (^)(NSString *))error __attribute__((swift_name("registerUser(creationOptions:result:error:)")));
- (void)signInUserPublicKey:(PaymentKitAssertionOptions *)publicKey result:(void (^)(PaymentKitAuthenticationPublicKey *))result error:(void (^)(NSString *))error __attribute__((swift_name("signInUser(publicKey:result:error:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnProxyModule")))
@interface PaymentKitWebauthnProxyModule : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webauthnProxyModule __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnProxyModule *shared __attribute__((swift_name("shared")));
- (PaymentKitKoin_coreModule *)get __attribute__((swift_name("get()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenCache")))
@interface PaymentKitTokenCache : PaymentKitBase
- (instancetype)initWithDataStore:(PaymentKitEncryptedStore *)dataStore __attribute__((swift_name("init(dataStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitTokenCacheCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)getToken __attribute__((swift_name("getToken()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveTokenToken:(NSString *)token completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("saveToken(token:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenCache.Companion")))
@interface PaymentKitTokenCacheCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitTokenCacheCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TokenDI")))
@interface PaymentKitTokenDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)tokenDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitTokenDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncryptedStore")))
@interface PaymentKitEncryptedStore : PaymentKitBase
- (instancetype)initWithSettings:(PaymentKitSettingsStore *)settings __attribute__((swift_name("init(settings:)"))) __attribute__((objc_designated_initializer));
- (void)deleteKey:(NSString *)key __attribute__((swift_name("delete(key:)")));
- (void)editKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("edit(key:value:)")));
- (NSString * _Nullable)readKey:(NSString *)key __attribute__((swift_name("read(key:)")));
@end

__attribute__((swift_name("SettingsStore")))
@interface PaymentKitSettingsStore : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<PaymentKitMultiplatform_settingsSettings>)getEncryptedSettings __attribute__((swift_name("getEncryptedSettings()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosSettingsStore")))
@interface PaymentKitIosSettingsStore : PaymentKitSettingsStore
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<PaymentKitMultiplatform_settingsSettings>)getEncryptedSettings __attribute__((swift_name("getEncryptedSettings()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalDataDI")))
@interface PaymentKitLocalDataDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)localDataDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLocalDataDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StoreDI")))
@interface PaymentKitStoreDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)storeDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitStoreDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebAuthnPresentationDI")))
@interface PaymentKitWebAuthnPresentationDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webAuthnPresentationDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebAuthnPresentationDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("Action")))
@protocol PaymentKitAction
@required
@end

__attribute__((swift_name("WebauthnActions")))
@protocol PaymentKitWebauthnActions <PaymentKitAction>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnActionsStartBiometricAuth")))
@interface PaymentKitWebauthnActionsStartBiometricAuth : PaymentKitBase <PaymentKitWebauthnActions>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)startBiometricAuth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnActionsStartBiometricAuth *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Result")))
@protocol PaymentKitResult
@required
@end

__attribute__((swift_name("WebauthnResults")))
@interface PaymentKitWebauthnResults : PaymentKitBase <PaymentKitResult>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnResults.ConfirmPayment")))
@interface PaymentKitWebauthnResultsConfirmPayment : PaymentKitWebauthnResults
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)confirmPayment __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnResultsConfirmPayment *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnResults.Error")))
@interface PaymentKitWebauthnResultsError : PaymentKitWebauthnResults
- (instancetype)initWithError:(PaymentKitKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitWebauthnResultsError *)doCopyError:(PaymentKitKotlinThrowable *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnResults.InFlight")))
@interface PaymentKitWebauthnResultsInFlight : PaymentKitWebauthnResults
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inFlight __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnResultsInFlight *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnResults.PaymentSucceeded")))
@interface PaymentKitWebauthnResultsPaymentSucceeded : PaymentKitWebauthnResults
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paymentSucceeded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnResultsPaymentSucceeded *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Effect")))
@protocol PaymentKitEffect
@required
@end

__attribute__((swift_name("WebauthnSideEffects")))
@interface PaymentKitWebauthnSideEffects : PaymentKitBase <PaymentKitEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnSideEffects.ConfirmPayment")))
@interface PaymentKitWebauthnSideEffectsConfirmPayment : PaymentKitWebauthnSideEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)confirmPayment __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnSideEffectsConfirmPayment *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnSideEffects.Idle")))
@interface PaymentKitWebauthnSideEffectsIdle : PaymentKitWebauthnSideEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnSideEffectsIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnSideEffects.PaymentSucceeded")))
@interface PaymentKitWebauthnSideEffectsPaymentSucceeded : PaymentKitWebauthnSideEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paymentSucceeded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnSideEffectsPaymentSucceeded *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("State")))
@protocol PaymentKitState
@required
@end

__attribute__((swift_name("WebauthnState")))
@interface PaymentKitWebauthnState : PaymentKitBase <PaymentKitState>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnState.Error")))
@interface PaymentKitWebauthnStateError : PaymentKitWebauthnState
- (instancetype)initWithException:(PaymentKitKotlinThrowable * _Nullable)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitWebauthnStateError *)doCopyException:(PaymentKitKotlinThrowable * _Nullable)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable * _Nullable exception __attribute__((swift_name("exception")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnState.Idle")))
@interface PaymentKitWebauthnStateIdle : PaymentKitWebauthnState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnStateIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnState.Loading")))
@interface PaymentKitWebauthnStateLoading : PaymentKitWebauthnState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnStateLoading *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("AbstractViewModel")))
@interface PaymentKitAbstractViewModel : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onCleared __attribute__((swift_name("onCleared()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<PaymentKitCoroutineScope> viewModelScope __attribute__((swift_name("viewModelScope")));
@end

__attribute__((swift_name("ViewModel")))
@interface PaymentKitViewModel<A, R, S, E> : PaymentKitAbstractViewModel
- (instancetype)initWithInitialState:(S)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)dispatchAction:(A)action __attribute__((swift_name("dispatch(action:)")));
- (PaymentKitCFlow<E> *)observeSideEffect __attribute__((swift_name("observeSideEffect()")));
- (PaymentKitCFlow<S> *)observeState __attribute__((swift_name("observeState()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (E)effect:(R)receiver __attribute__((swift_name("effect(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (S)plus:(S)receiver result:(R)result __attribute__((swift_name("plus(_:result:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)process:(A)receiver completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("process(_:completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (S)reduce:(S)receiver result:(R)result __attribute__((swift_name("reduce(_:result:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnViewModel")))
@interface PaymentKitWebauthnViewModel : PaymentKitViewModel<id<PaymentKitWebauthnActions>, PaymentKitWebauthnResults *, PaymentKitWebauthnState *, PaymentKitWebauthnSideEffects *>
- (instancetype)initWithVerifyUserBiometrics:(PaymentKitVerifyUserBiometrics *)verifyUserBiometrics __attribute__((swift_name("init(verifyUserBiometrics:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInitialState:(id<PaymentKitState>)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitWebauthnSideEffects *)effect:(PaymentKitWebauthnResults *)receiver __attribute__((swift_name("effect(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitWebauthnState *)plus:(PaymentKitWebauthnState *)receiver result:(PaymentKitWebauthnResults *)result __attribute__((swift_name("plus(_:result:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)process:(id<PaymentKitWebauthnActions>)receiver completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("process(_:completionHandler:)")));
@end

__attribute__((swift_name("LauncherActions")))
@interface PaymentKitLauncherActions : PaymentKitBase <PaymentKitAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherActions.StartPayment")))
@interface PaymentKitLauncherActionsStartPayment : PaymentKitLauncherActions
- (instancetype)initWithAmount:(double)amount tax:(double)tax countryCode:(NSString * _Nullable)countryCode phoneNumber:(NSString * _Nullable)phoneNumber __attribute__((swift_name("init(amount:tax:countryCode:phoneNumber:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitLauncherActionsStartPayment *)doCopyAmount:(double)amount tax:(double)tax countryCode:(NSString * _Nullable)countryCode phoneNumber:(NSString * _Nullable)phoneNumber __attribute__((swift_name("doCopy(amount:tax:countryCode:phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) double tax __attribute__((swift_name("tax")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherPresentationDI")))
@interface PaymentKitLauncherPresentationDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)launcherPresentationDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherPresentationDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("LauncherResults")))
@protocol PaymentKitLauncherResults <PaymentKitResult>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherResultsAuthBiometrics")))
@interface PaymentKitLauncherResultsAuthBiometrics : PaymentKitBase <PaymentKitLauncherResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authBiometrics __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherResultsAuthBiometrics *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherResultsError")))
@interface PaymentKitLauncherResultsError : PaymentKitBase <PaymentKitLauncherResults>
- (instancetype)initWithError:(PaymentKitKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitLauncherResultsError *)doCopyError:(PaymentKitKotlinThrowable *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherResultsInFlight")))
@interface PaymentKitLauncherResultsInFlight : PaymentKitBase <PaymentKitLauncherResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inFlight __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherResultsInFlight *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherResultsOtpAndBiometricsRegistrationRequired")))
@interface PaymentKitLauncherResultsOtpAndBiometricsRegistrationRequired : PaymentKitBase <PaymentKitLauncherResults>
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("init(phoneNumber:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitLauncherResultsOtpAndBiometricsRegistrationRequired *)doCopyPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("doCopy(phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherResultsPaymentMethodMissing")))
@interface PaymentKitLauncherResultsPaymentMethodMissing : PaymentKitBase <PaymentKitLauncherResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paymentMethodMissing __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherResultsPaymentMethodMissing *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherResultsPhoneNumberRequired")))
@interface PaymentKitLauncherResultsPhoneNumberRequired : PaymentKitBase <PaymentKitLauncherResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phoneNumberRequired __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherResultsPhoneNumberRequired *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("LauncherSideEffects")))
@interface PaymentKitLauncherSideEffects : PaymentKitBase <PaymentKitEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherSideEffects.AddRequiredPaymentMethod")))
@interface PaymentKitLauncherSideEffectsAddRequiredPaymentMethod : PaymentKitLauncherSideEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addRequiredPaymentMethod __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherSideEffectsAddRequiredPaymentMethod *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherSideEffects.AuthBiometrics")))
@interface PaymentKitLauncherSideEffectsAuthBiometrics : PaymentKitLauncherSideEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authBiometrics __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherSideEffectsAuthBiometrics *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherSideEffects.Idle")))
@interface PaymentKitLauncherSideEffectsIdle : PaymentKitLauncherSideEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherSideEffectsIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherSideEffects.RegisterUserWithPhoneNumber")))
@interface PaymentKitLauncherSideEffectsRegisterUserWithPhoneNumber : PaymentKitLauncherSideEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)registerUserWithPhoneNumber __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherSideEffectsRegisterUserWithPhoneNumber *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherSideEffects.VerifyOtpAndRegisterBiometrics")))
@interface PaymentKitLauncherSideEffectsVerifyOtpAndRegisterBiometrics : PaymentKitLauncherSideEffects
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("init(phoneNumber:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitLauncherSideEffectsVerifyOtpAndRegisterBiometrics *)doCopyPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("doCopy(phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((swift_name("LauncherState")))
@interface PaymentKitLauncherState : PaymentKitBase <PaymentKitState>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherState.Error")))
@interface PaymentKitLauncherStateError : PaymentKitLauncherState
- (instancetype)initWithException:(PaymentKitKotlinThrowable * _Nullable)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitLauncherStateError *)doCopyException:(PaymentKitKotlinThrowable * _Nullable)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable * _Nullable exception __attribute__((swift_name("exception")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherState.Idle")))
@interface PaymentKitLauncherStateIdle : PaymentKitLauncherState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherStateIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherState.Loading")))
@interface PaymentKitLauncherStateLoading : PaymentKitLauncherState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLauncherStateLoading *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LauncherViewModel")))
@interface PaymentKitLauncherViewModel : PaymentKitViewModel<PaymentKitLauncherActions *, id<PaymentKitLauncherResults>, PaymentKitLauncherState *, PaymentKitLauncherSideEffects *>
- (instancetype)initWithCreateTransaction:(PaymentKitCreateTransaction *)createTransaction getSessionId:(PaymentKitGetSessionId *)getSessionId getUserAuthStateInteractor:(PaymentKitGetUserAuthStateInteractor *)getUserAuthStateInteractor savePhoneNumber:(PaymentKitSavePhoneNumber *)savePhoneNumber __attribute__((swift_name("init(createTransaction:getSessionId:getUserAuthStateInteractor:savePhoneNumber:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInitialState:(id<PaymentKitState>)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitLauncherSideEffects *)effect:(id<PaymentKitLauncherResults>)receiver __attribute__((swift_name("effect(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitLauncherState *)plus:(PaymentKitLauncherState *)receiver result:(id<PaymentKitLauncherResults>)result __attribute__((swift_name("plus(_:result:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)process:(PaymentKitLauncherActions *)receiver completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("process(_:completionHandler:)")));
@end

__attribute__((swift_name("PhoneNumberActions")))
@interface PaymentKitPhoneNumberActions : PaymentKitBase <PaymentKitAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberActions.SubmitPhoneNumber")))
@interface PaymentKitPhoneNumberActionsSubmitPhoneNumber : PaymentKitPhoneNumberActions
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)submitPhoneNumber __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberActionsSubmitPhoneNumber *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PhoneNumberEffects")))
@interface PaymentKitPhoneNumberEffects : PaymentKitBase <PaymentKitEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberEffects.AddCard")))
@interface PaymentKitPhoneNumberEffectsAddCard : PaymentKitPhoneNumberEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addCard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberEffectsAddCard *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberEffects.Idle")))
@interface PaymentKitPhoneNumberEffectsIdle : PaymentKitPhoneNumberEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberEffectsIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberEffects.OtpAndRegisterBiometrics")))
@interface PaymentKitPhoneNumberEffectsOtpAndRegisterBiometrics : PaymentKitPhoneNumberEffects
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("init(phoneNumber:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitPhoneNumberEffectsOtpAndRegisterBiometrics *)doCopyPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("doCopy(phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberEffects.TakeBiometrics")))
@interface PaymentKitPhoneNumberEffectsTakeBiometrics : PaymentKitPhoneNumberEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)takeBiometrics __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberEffectsTakeBiometrics *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("PhoneNumberResults")))
@interface PaymentKitPhoneNumberResults : PaymentKitBase <PaymentKitResult>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberResults.AddCard")))
@interface PaymentKitPhoneNumberResultsAddCard : PaymentKitPhoneNumberResults
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addCard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberResultsAddCard *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberResults.AuthBiometrics")))
@interface PaymentKitPhoneNumberResultsAuthBiometrics : PaymentKitPhoneNumberResults
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)authBiometrics __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberResultsAuthBiometrics *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberResults.Error")))
@interface PaymentKitPhoneNumberResultsError : PaymentKitPhoneNumberResults
- (instancetype)initWithThrowable:(PaymentKitKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitPhoneNumberResultsError *)doCopyThrowable:(PaymentKitKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberResults.InFlight")))
@interface PaymentKitPhoneNumberResultsInFlight : PaymentKitPhoneNumberResults
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inFlight __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberResultsInFlight *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberResults.OtpAndRegisterBiometrics")))
@interface PaymentKitPhoneNumberResultsOtpAndRegisterBiometrics : PaymentKitPhoneNumberResults
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("init(phoneNumber:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitPhoneNumberResultsOtpAndRegisterBiometrics *)doCopyPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("doCopy(phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((swift_name("PhoneNumberState")))
@interface PaymentKitPhoneNumberState : PaymentKitBase <PaymentKitState>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberState.Error")))
@interface PaymentKitPhoneNumberStateError : PaymentKitPhoneNumberState
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitPhoneNumberStateError *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberState.Idle")))
@interface PaymentKitPhoneNumberStateIdle : PaymentKitPhoneNumberState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberStateIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberState.Loading")))
@interface PaymentKitPhoneNumberStateLoading : PaymentKitPhoneNumberState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberStateLoading *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberViewModel")))
@interface PaymentKitPhoneNumberViewModel : PaymentKitViewModel<PaymentKitPhoneNumberActions *, PaymentKitPhoneNumberResults *, PaymentKitPhoneNumberState *, PaymentKitPhoneNumberEffects *>
- (instancetype)initWithGetUserAuthStateInteractor:(PaymentKitGetUserAuthStateInteractor *)getUserAuthStateInteractor savePhoneNumber:(PaymentKitSavePhoneNumber *)savePhoneNumber __attribute__((swift_name("init(getUserAuthStateInteractor:savePhoneNumber:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInitialState:(id<PaymentKitState>)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitPhoneNumberEffects *)effect:(PaymentKitPhoneNumberResults *)receiver __attribute__((swift_name("effect(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitPhoneNumberState *)plus:(PaymentKitPhoneNumberState *)receiver result:(PaymentKitPhoneNumberResults *)result __attribute__((swift_name("plus(_:result:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)process:(PaymentKitPhoneNumberActions *)receiver completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("process(_:completionHandler:)")));
@property (readonly) PaymentKitPhoneNumberController *phoneController __attribute__((swift_name("phoneController")));
@end

__attribute__((swift_name("OtpActions")))
@protocol PaymentKitOtpActions <PaymentKitAction>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpActionsEditPhoneNumber")))
@interface PaymentKitOtpActionsEditPhoneNumber : PaymentKitBase <PaymentKitOtpActions>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)editPhoneNumber __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpActionsEditPhoneNumber *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpActionsResend")))
@interface PaymentKitOtpActionsResend : PaymentKitBase <PaymentKitOtpActions>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resend __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpActionsResend *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpActionsSendOtp")))
@interface PaymentKitOtpActionsSendOtp : PaymentKitBase <PaymentKitOtpActions>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sendOtp __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpActionsSendOtp *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("OtpEffects")))
@protocol PaymentKitOtpEffects <PaymentKitEffect>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpEffectsAddCard")))
@interface PaymentKitOtpEffectsAddCard : PaymentKitBase <PaymentKitOtpEffects>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addCard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpEffectsAddCard *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpEffectsChangePhoneNumber")))
@interface PaymentKitOtpEffectsChangePhoneNumber : PaymentKitBase <PaymentKitOtpEffects>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)changePhoneNumber __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpEffectsChangePhoneNumber *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpEffectsIdle")))
@interface PaymentKitOtpEffectsIdle : PaymentKitBase <PaymentKitOtpEffects>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpEffectsIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpEffectsRequestOtpFocus")))
@interface PaymentKitOtpEffectsRequestOtpFocus : PaymentKitBase <PaymentKitOtpEffects>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requestOtpFocus __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpEffectsRequestOtpFocus *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpEffectsShowSuccessResend")))
@interface PaymentKitOtpEffectsShowSuccessResend : PaymentKitBase <PaymentKitOtpEffects>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)showSuccessResend __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpEffectsShowSuccessResend *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpEffectsTakeBiometrics")))
@interface PaymentKitOtpEffectsTakeBiometrics : PaymentKitBase <PaymentKitOtpEffects>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)takeBiometrics __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpEffectsTakeBiometrics *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("OtpResults")))
@protocol PaymentKitOtpResults <PaymentKitResult>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpResultsChangePhoneNumber")))
@interface PaymentKitOtpResultsChangePhoneNumber : PaymentKitBase <PaymentKitOtpResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)changePhoneNumber __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpResultsChangePhoneNumber *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpResultsCompleteProfile")))
@interface PaymentKitOtpResultsCompleteProfile : PaymentKitBase <PaymentKitOtpResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)completeProfile __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpResultsCompleteProfile *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpResultsError")))
@interface PaymentKitOtpResultsError : PaymentKitBase <PaymentKitOtpResults>
- (instancetype)initWithThrowable:(PaymentKitKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitOtpResultsError *)doCopyThrowable:(PaymentKitKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpResultsIdle")))
@interface PaymentKitOtpResultsIdle : PaymentKitBase <PaymentKitOtpResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpResultsIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpResultsInFlight")))
@interface PaymentKitOtpResultsInFlight : PaymentKitBase <PaymentKitOtpResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inFlight __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpResultsInFlight *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpResultsPhoneNumber")))
@interface PaymentKitOtpResultsPhoneNumber : PaymentKitBase <PaymentKitOtpResults>
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("init(phoneNumber:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitOtpResultsPhoneNumber *)doCopyPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("doCopy(phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpResultsRequestFocus")))
@interface PaymentKitOtpResultsRequestFocus : PaymentKitBase <PaymentKitOtpResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requestFocus __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpResultsRequestFocus *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpResultsResendInFlight")))
@interface PaymentKitOtpResultsResendInFlight : PaymentKitBase <PaymentKitOtpResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resendInFlight __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpResultsResendInFlight *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpResultsResentedCode")))
@interface PaymentKitOtpResultsResentedCode : PaymentKitBase <PaymentKitOtpResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resentedCode __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOtpResultsResentedCode *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpState")))
@interface PaymentKitOtpState : PaymentKitBase <PaymentKitState>
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber isLoading:(BOOL)isLoading isProcessingResend:(BOOL)isProcessingResend error:(NSString * _Nullable)error __attribute__((swift_name("init(phoneNumber:isLoading:isProcessingResend:error:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitOtpState *)doCopyPhoneNumber:(NSString *)phoneNumber isLoading:(BOOL)isLoading isProcessingResend:(BOOL)isProcessingResend error:(NSString * _Nullable)error __attribute__((swift_name("doCopy(phoneNumber:isLoading:isProcessingResend:error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable error __attribute__((swift_name("error")));
@property (readonly) BOOL isLoading __attribute__((swift_name("isLoading")));
@property (readonly) BOOL isProcessingResend __attribute__((swift_name("isProcessingResend")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OtpViewModel")))
@interface PaymentKitOtpViewModel : PaymentKitViewModel<id<PaymentKitOtpActions>, id<PaymentKitOtpResults>, PaymentKitOtpState *, id<PaymentKitOtpEffects>>
- (instancetype)initWithVerifyOtp:(PaymentKitVerifyOtp *)verifyOtp sendOtp:(PaymentKitSendOtp *)sendOtp getPhoneNumber:(PaymentKitGetPhoneNumber *)getPhoneNumber __attribute__((swift_name("init(verifyOtp:sendOtp:getPhoneNumber:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInitialState:(id<PaymentKitState>)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<PaymentKitOtpEffects>)effect:(id<PaymentKitOtpResults>)receiver __attribute__((swift_name("effect(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitOtpState *)plus:(PaymentKitOtpState *)receiver result:(id<PaymentKitOtpResults>)result __attribute__((swift_name("plus(_:result:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)process:(id<PaymentKitOtpActions>)receiver completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("process(_:completionHandler:)")));
@property (readonly) PaymentKitOTPElement *otpElement __attribute__((swift_name("otpElement")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberPresentationDI")))
@interface PaymentKitPhoneNumberPresentationDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phoneNumberPresentationDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberPresentationDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("CardsActions")))
@interface PaymentKitCardsActions : PaymentKitBase <PaymentKitAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsActions.AddCard")))
@interface PaymentKitCardsActionsAddCard : PaymentKitCardsActions
- (instancetype)initWithBrowserLanguage:(NSString *)browserLanguage browserScreenHeight:(NSString *)browserScreenHeight browserScreenWidth:(NSString *)browserScreenWidth browserTimezone:(NSString *)browserTimezone browserScreenColorDepth:(NSString *)browserScreenColorDepth browserChallengeWindow:(NSString *)browserChallengeWindow __attribute__((swift_name("init(browserLanguage:browserScreenHeight:browserScreenWidth:browserTimezone:browserScreenColorDepth:browserChallengeWindow:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardsActionsAddCard *)doCopyBrowserLanguage:(NSString *)browserLanguage browserScreenHeight:(NSString *)browserScreenHeight browserScreenWidth:(NSString *)browserScreenWidth browserTimezone:(NSString *)browserTimezone browserScreenColorDepth:(NSString *)browserScreenColorDepth browserChallengeWindow:(NSString *)browserChallengeWindow __attribute__((swift_name("doCopy(browserLanguage:browserScreenHeight:browserScreenWidth:browserTimezone:browserScreenColorDepth:browserChallengeWindow:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *browserChallengeWindow __attribute__((swift_name("browserChallengeWindow")));
@property (readonly) NSString *browserLanguage __attribute__((swift_name("browserLanguage")));
@property (readonly) NSString *browserScreenColorDepth __attribute__((swift_name("browserScreenColorDepth")));
@property (readonly) NSString *browserScreenHeight __attribute__((swift_name("browserScreenHeight")));
@property (readonly) NSString *browserScreenWidth __attribute__((swift_name("browserScreenWidth")));
@property (readonly) NSString *browserTimezone __attribute__((swift_name("browserTimezone")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsActions.ConfirmPayment")))
@interface PaymentKitCardsActionsConfirmPayment : PaymentKitCardsActions
- (instancetype)initWithCardId:(NSString *)cardId browserScreenHeight:(NSString *)browserScreenHeight browserScreenWidth:(NSString *)browserScreenWidth __attribute__((swift_name("init(cardId:browserScreenHeight:browserScreenWidth:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardsActionsConfirmPayment *)doCopyCardId:(NSString *)cardId browserScreenHeight:(NSString *)browserScreenHeight browserScreenWidth:(NSString *)browserScreenWidth __attribute__((swift_name("doCopy(cardId:browserScreenHeight:browserScreenWidth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *browserScreenHeight __attribute__((swift_name("browserScreenHeight")));
@property (readonly) NSString *browserScreenWidth __attribute__((swift_name("browserScreenWidth")));
@property (readonly) NSString *cardId __attribute__((swift_name("cardId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsActions.GetCards")))
@interface PaymentKitCardsActionsGetCards : PaymentKitCardsActions
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getCards __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsActionsGetCards *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsActions.RedirectionUrlLoaded")))
@interface PaymentKitCardsActionsRedirectionUrlLoaded : PaymentKitCardsActions
- (instancetype)initWithUrl:(NSString *)url isNewCard:(BOOL)isNewCard __attribute__((swift_name("init(url:isNewCard:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardsActionsRedirectionUrlLoaded *)doCopyUrl:(NSString *)url isNewCard:(BOOL)isNewCard __attribute__((swift_name("doCopy(url:isNewCard:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isNewCard __attribute__((swift_name("isNewCard")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("CardsEffects")))
@interface PaymentKitCardsEffects : PaymentKitBase <PaymentKitEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsEffects.Idle")))
@interface PaymentKitCardsEffectsIdle : PaymentKitCardsEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsEffectsIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsEffects.PaymentSucceeded")))
@interface PaymentKitCardsEffectsPaymentSucceeded : PaymentKitCardsEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paymentSucceeded __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsEffectsPaymentSucceeded *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsEffects.RequireAddingNewCard")))
@interface PaymentKitCardsEffectsRequireAddingNewCard : PaymentKitCardsEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requireAddingNewCard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsEffectsRequireAddingNewCard *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsEffects.VerifyOtpAndSignIn")))
@interface PaymentKitCardsEffectsVerifyOtpAndSignIn : PaymentKitCardsEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)verifyOtpAndSignIn __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsEffectsVerifyOtpAndSignIn *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsPresentationDI")))
@interface PaymentKitCardsPresentationDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardsPresentationDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsPresentationDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("CardsResults")))
@protocol PaymentKitCardsResults <PaymentKitResult>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsResultsCards")))
@interface PaymentKitCardsResultsCards : PaymentKitBase <PaymentKitCardsResults>
- (instancetype)initWithData:(NSArray<PaymentKitCard *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardsResultsCards *)doCopyData:(NSArray<PaymentKitCard *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PaymentKitCard *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsResultsError")))
@interface PaymentKitCardsResultsError : PaymentKitBase <PaymentKitCardsResults>
- (instancetype)initWithThrowable:(PaymentKitKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardsResultsError *)doCopyThrowable:(PaymentKitKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsResultsIdle")))
@interface PaymentKitCardsResultsIdle : PaymentKitBase <PaymentKitCardsResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsResultsIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsResultsInFlight")))
@interface PaymentKitCardsResultsInFlight : PaymentKitBase <PaymentKitCardsResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inFlight __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsResultsInFlight *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsResultsRedirect3Ds")))
@interface PaymentKitCardsResultsRedirect3Ds : PaymentKitBase <PaymentKitCardsResults>
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardsResultsRedirect3Ds *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsResultsRequireAddingNewCard")))
@interface PaymentKitCardsResultsRequireAddingNewCard : PaymentKitBase <PaymentKitCardsResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requireAddingNewCard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsResultsRequireAddingNewCard *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsResultsSuccessPayment")))
@interface PaymentKitCardsResultsSuccessPayment : PaymentKitBase <PaymentKitCardsResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)successPayment __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsResultsSuccessPayment *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsResultsVerifyOtpAndSignIn")))
@interface PaymentKitCardsResultsVerifyOtpAndSignIn : PaymentKitBase <PaymentKitCardsResults>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)verifyOtpAndSignIn __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsResultsVerifyOtpAndSignIn *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CardsState")))
@interface PaymentKitCardsState : PaymentKitBase <PaymentKitState>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsState.Cards")))
@interface PaymentKitCardsStateCards : PaymentKitCardsState
- (instancetype)initWithData:(NSArray<PaymentKitCard *> *)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardsStateCards *)doCopyData:(NSArray<PaymentKitCard *> *)data __attribute__((swift_name("doCopy(data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PaymentKitCard *> *data __attribute__((swift_name("data")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsState.Error")))
@interface PaymentKitCardsStateError : PaymentKitCardsState
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardsStateError *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsState.Idle")))
@interface PaymentKitCardsStateIdle : PaymentKitCardsState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsStateIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsState.Loading")))
@interface PaymentKitCardsStateLoading : PaymentKitCardsState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsStateLoading *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsState.Redirect3Ds")))
@interface PaymentKitCardsStateRedirect3Ds : PaymentKitCardsState
- (instancetype)initWithUrl:(NSString *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardsStateRedirect3Ds *)doCopyUrl:(NSString *)url __attribute__((swift_name("doCopy(url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsViewModel")))
@interface PaymentKitCardsViewModel : PaymentKitViewModel<PaymentKitCardsActions *, id<PaymentKitCardsResults>, PaymentKitCardsState *, PaymentKitCardsEffects *>
- (instancetype)initWithGetCards:(PaymentKitGetCards *)getCards addCardUseCase:(PaymentKitAddCardUseCase *)addCardUseCase confirmPaymentUseCase:(PaymentKitConfirmPaymentUseCase *)confirmPaymentUseCase detectSuccessStepFromUrl:(PaymentKitDetectSuccessStepFromUrl *)detectSuccessStepFromUrl isUserIsSignedIn:(PaymentKitCheckIfUserIsSignedIn *)isUserIsSignedIn __attribute__((swift_name("init(getCards:addCardUseCase:confirmPaymentUseCase:detectSuccessStepFromUrl:isUserIsSignedIn:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInitialState:(id<PaymentKitState>)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitCardsEffects *)effect:(id<PaymentKitCardsResults>)receiver __attribute__((swift_name("effect(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitCardsState *)plus:(PaymentKitCardsState *)receiver result:(id<PaymentKitCardsResults>)result __attribute__((swift_name("plus(_:result:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)process:(PaymentKitCardsActions *)receiver completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("process(_:completionHandler:)")));
@property (readonly) PaymentKitCardDetailsSectionController *cardDetailsSectionController __attribute__((swift_name("cardDetailsSectionController")));
@property (readonly) id<PaymentKitStateFlow> isComplete __attribute__((swift_name("isComplete")));
@end

__attribute__((swift_name("SuccessActions")))
@interface PaymentKitSuccessActions : PaymentKitBase <PaymentKitAction>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessActions.GetTransactionInfo")))
@interface PaymentKitSuccessActionsGetTransactionInfo : PaymentKitSuccessActions
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)getTransactionInfo __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSuccessActionsGetTransactionInfo *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessPresentationDI")))
@interface PaymentKitSuccessPresentationDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)successPresentationDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSuccessPresentationDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("SuccessResults")))
@interface PaymentKitSuccessResults : PaymentKitBase <PaymentKitResult>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessResults.Error")))
@interface PaymentKitSuccessResultsError : PaymentKitSuccessResults
- (instancetype)initWithError:(PaymentKitKotlinThrowable *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitSuccessResultsError *)doCopyError:(PaymentKitKotlinThrowable *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable *error __attribute__((swift_name("error")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessResults.InFlight")))
@interface PaymentKitSuccessResultsInFlight : PaymentKitSuccessResults
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inFlight __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSuccessResultsInFlight *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessResults.TransactionInfo")))
@interface PaymentKitSuccessResultsTransactionInfo : PaymentKitSuccessResults
- (instancetype)initWithTransaction:(PaymentKitTransaction *)transaction __attribute__((swift_name("init(transaction:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitSuccessResultsTransactionInfo *)doCopyTransaction:(PaymentKitTransaction *)transaction __attribute__((swift_name("doCopy(transaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitTransaction *transaction __attribute__((swift_name("transaction")));
@end

__attribute__((swift_name("SuccessSideEffects")))
@interface PaymentKitSuccessSideEffects : PaymentKitBase <PaymentKitEffect>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessSideEffects.Failed")))
@interface PaymentKitSuccessSideEffectsFailed : PaymentKitSuccessSideEffects
- (instancetype)initWithThrowable:(PaymentKitKotlinThrowable *)throwable __attribute__((swift_name("init(throwable:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitSuccessSideEffectsFailed *)doCopyThrowable:(PaymentKitKotlinThrowable *)throwable __attribute__((swift_name("doCopy(throwable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable *throwable __attribute__((swift_name("throwable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessSideEffects.Idle")))
@interface PaymentKitSuccessSideEffectsIdle : PaymentKitSuccessSideEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSuccessSideEffectsIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessSideEffects.Success")))
@interface PaymentKitSuccessSideEffectsSuccess : PaymentKitSuccessSideEffects
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSuccessSideEffectsSuccess *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("SuccessState")))
@interface PaymentKitSuccessState : PaymentKitBase <PaymentKitState>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessState.Error")))
@interface PaymentKitSuccessStateError : PaymentKitSuccessState
- (instancetype)initWithException:(PaymentKitKotlinThrowable * _Nullable)exception __attribute__((swift_name("init(exception:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitSuccessStateError *)doCopyException:(PaymentKitKotlinThrowable * _Nullable)exception __attribute__((swift_name("doCopy(exception:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable * _Nullable exception __attribute__((swift_name("exception")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessState.Idle")))
@interface PaymentKitSuccessStateIdle : PaymentKitSuccessState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)idle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSuccessStateIdle *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessState.Loading")))
@interface PaymentKitSuccessStateLoading : PaymentKitSuccessState
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loading __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSuccessStateLoading *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessState.TransactionInfo")))
@interface PaymentKitSuccessStateTransactionInfo : PaymentKitSuccessState
- (instancetype)initWithTransaction:(PaymentKitTransaction *)transaction __attribute__((swift_name("init(transaction:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitSuccessStateTransactionInfo *)doCopyTransaction:(PaymentKitTransaction *)transaction __attribute__((swift_name("doCopy(transaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitTransaction *transaction __attribute__((swift_name("transaction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SuccessViewModel")))
@interface PaymentKitSuccessViewModel : PaymentKitViewModel<PaymentKitSuccessActions *, PaymentKitSuccessResults *, PaymentKitSuccessState *, PaymentKitSuccessSideEffects *>
- (instancetype)initWithGetTransactionStatus:(PaymentKitGetTransactionStatus *)getTransactionStatus __attribute__((swift_name("init(getTransactionStatus:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithInitialState:(id<PaymentKitState>)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitSuccessSideEffects *)effect:(PaymentKitSuccessResults *)receiver __attribute__((swift_name("effect(_:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitSuccessState *)plus:(PaymentKitSuccessState *)receiver result:(PaymentKitSuccessResults *)result __attribute__((swift_name("plus(_:result:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)process:(PaymentKitSuccessActions *)receiver completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("process(_:completionHandler:)")));
@end

__attribute__((swift_name("Flow")))
@protocol PaymentKitFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PaymentKitFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlow")))
@interface PaymentKitCFlow<T> : PaymentKitBase <PaymentKitFlow>
- (instancetype)initWithOrigin:(id<PaymentKitFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PaymentKitFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<PaymentKitFlow>)origin __attribute__((swift_name("origin()")));
- (id<PaymentKitCloseable>)watchBlock:(void (^)(T))block __attribute__((swift_name("watch(block:)")));
@end

__attribute__((swift_name("Closeable")))
@protocol PaymentKitCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((swift_name("Controller")))
@protocol PaymentKitController
@required
@end

__attribute__((swift_name("SectionFieldErrorController")))
@protocol PaymentKitSectionFieldErrorController <PaymentKitController>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressController")))
@interface PaymentKitAddressController : PaymentKitBase <PaymentKitSectionFieldErrorController>
- (instancetype)initWithFieldsFlowable:(id<PaymentKitFlow>)fieldsFlowable __attribute__((swift_name("init(fieldsFlowable:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PaymentKitFlow> fieldsFlowable __attribute__((swift_name("fieldsFlowable")));
@property (readonly) PaymentKitInt * _Nullable label __attribute__((swift_name("label")));
@end

__attribute__((swift_name("SectionFieldElement")))
@protocol PaymentKitSectionFieldElement
@required
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (id<PaymentKitFlow>)getTextFieldIdentifiers __attribute__((swift_name("getTextFieldIdentifiers()")));
- (id<PaymentKitSectionFieldErrorController>)sectionFieldErrorController __attribute__((swift_name("sectionFieldErrorController()")));
- (void)setRawValueRawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap __attribute__((swift_name("setRawValue(rawValuesMap:)")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@property (readonly) BOOL shouldRenderOutsideCard __attribute__((swift_name("shouldRenderOutsideCard")));
@end

__attribute__((swift_name("SectionMultiFieldElement")))
@interface PaymentKitSectionMultiFieldElement : PaymentKitBase <PaymentKitSectionFieldElement>
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((swift_name("AddressElement")))
@interface PaymentKitAddressElement : PaymentKitSectionMultiFieldElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier addressRepository:(PaymentKitAddressRepository *)addressRepository rawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap addressType:(PaymentKitAddressType *)addressType countryCodes:(NSSet<NSString *> *)countryCodes countryDropdownFieldController:(PaymentKitDropdownFieldController *)countryDropdownFieldController sameAsShippingElement:(PaymentKitSameAsShippingElement * _Nullable)sameAsShippingElement shippingValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> * _Nullable)shippingValuesMap __attribute__((swift_name("init(identifier:addressRepository:rawValuesMap:addressType:countryCodes:countryDropdownFieldController:sameAsShippingElement:shippingValuesMap:)"))) __attribute__((objc_designated_initializer));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (id<PaymentKitFlow>)getTextFieldIdentifiers __attribute__((swift_name("getTextFieldIdentifiers()")));
- (id<PaymentKitSectionFieldErrorController>)sectionFieldErrorController __attribute__((swift_name("sectionFieldErrorController()")));
- (void)setRawValueRawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap __attribute__((swift_name("setRawValue(rawValuesMap:)")));
@property (readonly) PaymentKitAddressController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitCountryElement *countryElement __attribute__((swift_name("countryElement")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=tech/amwal/components/ui/FormItemSpecSerializer))
*/
__attribute__((swift_name("FormItemSpec")))
@interface PaymentKitFormItemSpec : PaymentKitBase
@property (class, readonly, getter=companion) PaymentKitFormItemSpecCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressSpec")))
@interface PaymentKitAddressSpec : PaymentKitFormItemSpec
- (instancetype)initWithApiPath:(PaymentKitIdentifierSpec *)apiPath allowedCountryCodes:(NSSet<NSString *> *)allowedCountryCodes displayFields:(NSSet<PaymentKitDisplayField *> *)displayFields showLabel:(BOOL)showLabel type:(PaymentKitAddressType *)type __attribute__((swift_name("init(apiPath:allowedCountryCodes:displayFields:showLabel:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitAddressSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitAddressSpec *)doCopyApiPath:(PaymentKitIdentifierSpec *)apiPath allowedCountryCodes:(NSSet<NSString *> *)allowedCountryCodes displayFields:(NSSet<PaymentKitDisplayField *> *)displayFields showLabel:(BOOL)showLabel type:(PaymentKitAddressType *)type __attribute__((swift_name("doCopy(apiPath:allowedCountryCodes:displayFields:showLabel:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PaymentKitSectionElement *)transformInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues addressRepository:(PaymentKitAddressRepository *)addressRepository shippingValues:(NSDictionary<PaymentKitIdentifierSpec *, id> * _Nullable)shippingValues __attribute__((swift_name("transform(initialValues:addressRepository:shippingValues:)")));
@property (readonly) NSSet<NSString *> *allowedCountryCodes __attribute__((swift_name("allowedCountryCodes")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@property (readonly) NSSet<PaymentKitDisplayField *> *displayFields __attribute__((swift_name("displayFields")));
@property (readonly) BOOL showLabel __attribute__((swift_name("showLabel")));
@property (readonly) PaymentKitAddressType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressSpec.Companion")))
@interface PaymentKitAddressSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitAddressSpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("InputController")))
@protocol PaymentKitInputController <PaymentKitSectionFieldErrorController>
@required
- (void)onRawValueChangeRawValue:(NSString *)rawValue __attribute__((swift_name("onRawValueChange(rawValue:)")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@end

__attribute__((swift_name("TextFieldController")))
@protocol PaymentKitTextFieldController <PaymentKitInputController>
@required
- (void)onFocusChangeNewHasFocus:(BOOL)newHasFocus __attribute__((swift_name("onFocusChange(newHasFocus:)")));
- (id<PaymentKitTextFieldState> _Nullable)onValueChangeDisplayFormatted:(NSString *)displayFormatted __attribute__((swift_name("onValueChange(displayFormatted:)")));
@property (readonly) id<PaymentKitFlow> contentDescription __attribute__((swift_name("contentDescription")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) BOOL enabled __attribute__((swift_name("enabled")));
@property (readonly) PaymentKitKeyboardType *keyboardType __attribute__((swift_name("keyboardType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressTextFieldController")))
@interface PaymentKitAddressTextFieldController : PaymentKitBase <PaymentKitTextFieldController, PaymentKitInputController, PaymentKitSectionFieldErrorController>
- (instancetype)initWithConfig:(id<PaymentKitTextFieldConfig>)config onNavigation:(void (^ _Nullable)(void))onNavigation initialValue:(NSString * _Nullable)initialValue __attribute__((swift_name("init(config:onNavigation:initialValue:)"))) __attribute__((objc_designated_initializer));
- (void)launchAutocompleteScreen __attribute__((swift_name("launchAutocompleteScreen()")));
- (void)onFocusChangeNewHasFocus:(BOOL)newHasFocus __attribute__((swift_name("onFocusChange(newHasFocus:)")));
- (void)onRawValueChangeRawValue:(NSString *)rawValue __attribute__((swift_name("onRawValueChange(rawValue:)")));
- (id<PaymentKitTextFieldState> _Nullable)onValueChangeDisplayFormatted:(NSString *)displayFormatted __attribute__((swift_name("onValueChange(displayFormatted:)")));
@property (readonly) id<PaymentKitFlow> contentDescription __attribute__((swift_name("contentDescription")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboardType __attribute__((swift_name("keyboardType")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((swift_name("AddressType")))
@interface PaymentKitAddressType : PaymentKitBase
@property (readonly) PaymentKitPhoneNumberState_ *phoneNumberState __attribute__((swift_name("phoneNumberState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressType.Normal")))
@interface PaymentKitAddressTypeNormal : PaymentKitAddressType
- (instancetype)initWithPhoneNumberState:(PaymentKitPhoneNumberState_ *)phoneNumberState __attribute__((swift_name("init(phoneNumberState:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddressTypeNormal *)doCopyPhoneNumberState:(PaymentKitPhoneNumberState_ *)phoneNumberState __attribute__((swift_name("doCopy(phoneNumberState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitPhoneNumberState_ *phoneNumberState __attribute__((swift_name("phoneNumberState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressType.ShippingCondensed")))
@interface PaymentKitAddressTypeShippingCondensed : PaymentKitAddressType
- (instancetype)initWithGoogleApiKey:(NSString * _Nullable)googleApiKey autocompleteCountries:(NSSet<NSString *> * _Nullable)autocompleteCountries phoneNumberState:(PaymentKitPhoneNumberState_ *)phoneNumberState onNavigation:(void (^)(void))onNavigation __attribute__((swift_name("init(googleApiKey:autocompleteCountries:phoneNumberState:onNavigation:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddressTypeShippingCondensed *)doCopyGoogleApiKey:(NSString * _Nullable)googleApiKey autocompleteCountries:(NSSet<NSString *> * _Nullable)autocompleteCountries phoneNumberState:(PaymentKitPhoneNumberState_ *)phoneNumberState onNavigation:(void (^)(void))onNavigation __attribute__((swift_name("doCopy(googleApiKey:autocompleteCountries:phoneNumberState:onNavigation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<NSString *> * _Nullable autocompleteCountries __attribute__((swift_name("autocompleteCountries")));
@property (readonly) NSString * _Nullable googleApiKey __attribute__((swift_name("googleApiKey")));
@property (readonly) void (^onNavigation)(void) __attribute__((swift_name("onNavigation")));
@property (readonly) PaymentKitPhoneNumberState_ *phoneNumberState __attribute__((swift_name("phoneNumberState")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressType.ShippingExpanded")))
@interface PaymentKitAddressTypeShippingExpanded : PaymentKitAddressType
- (instancetype)initWithPhoneNumberState:(PaymentKitPhoneNumberState_ *)phoneNumberState __attribute__((swift_name("init(phoneNumberState:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddressTypeShippingExpanded *)doCopyPhoneNumberState:(PaymentKitPhoneNumberState_ *)phoneNumberState __attribute__((swift_name("doCopy(phoneNumberState:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitPhoneNumberState_ *phoneNumberState __attribute__((swift_name("phoneNumberState")));
@end

__attribute__((swift_name("DropdownConfig")))
@protocol PaymentKitDropdownConfig
@required
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)getSelectedItemLabelIndex:(int32_t)index __attribute__((swift_name("getSelectedItemLabel(index:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) NSArray<NSString *> *displayItems __attribute__((swift_name("displayItems")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSArray<id> *rawItems __attribute__((swift_name("rawItems")));
@property (readonly) BOOL tinyMode __attribute__((swift_name("tinyMode")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdministrativeAreaConfig")))
@interface PaymentKitAdministrativeAreaConfig : PaymentKitBase <PaymentKitDropdownConfig>
- (instancetype)initWithCountry:(PaymentKitAdministrativeAreaConfigCountry *)country __attribute__((swift_name("init(country:)"))) __attribute__((objc_designated_initializer));
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)getSelectedItemLabelIndex:(int32_t)index __attribute__((swift_name("getSelectedItemLabel(index:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) NSArray<NSString *> *displayItems __attribute__((swift_name("displayItems")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSArray<NSString *> *rawItems __attribute__((swift_name("rawItems")));
@property (readonly) BOOL tinyMode __attribute__((swift_name("tinyMode")));
@end

__attribute__((swift_name("AdministrativeAreaConfig.Country")))
@interface PaymentKitAdministrativeAreaConfigCountry : PaymentKitBase
@property (readonly) NSArray<PaymentKitKotlinPair<NSString *, NSString *> *> *administrativeAreas __attribute__((swift_name("administrativeAreas")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdministrativeAreaConfig.CountryCanada")))
@interface PaymentKitAdministrativeAreaConfigCountryCanada : PaymentKitAdministrativeAreaConfigCountry
- (instancetype)initWithLabel:(NSString *)label administrativeAreas:(NSArray<PaymentKitKotlinPair<NSString *, NSString *> *> *)administrativeAreas __attribute__((swift_name("init(label:administrativeAreas:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAdministrativeAreaConfigCountryCanada *)doCopyLabel:(NSString *)label administrativeAreas:(NSArray<PaymentKitKotlinPair<NSString *, NSString *> *> *)administrativeAreas __attribute__((swift_name("doCopy(label:administrativeAreas:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PaymentKitKotlinPair<NSString *, NSString *> *> *administrativeAreas __attribute__((swift_name("administrativeAreas")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdministrativeAreaConfig.CountryUS")))
@interface PaymentKitAdministrativeAreaConfigCountryUS : PaymentKitAdministrativeAreaConfigCountry
- (instancetype)initWithLabel:(NSString *)label administrativeAreas:(NSArray<PaymentKitKotlinPair<NSString *, NSString *> *> *)administrativeAreas __attribute__((swift_name("init(label:administrativeAreas:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAdministrativeAreaConfigCountryUS *)doCopyLabel:(NSString *)label administrativeAreas:(NSArray<PaymentKitKotlinPair<NSString *, NSString *> *> *)administrativeAreas __attribute__((swift_name("doCopy(label:administrativeAreas:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PaymentKitKotlinPair<NSString *, NSString *> *> *administrativeAreas __attribute__((swift_name("administrativeAreas")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end

__attribute__((swift_name("SectionSingleFieldElement")))
@interface PaymentKitSectionSingleFieldElement : PaymentKitBase <PaymentKitSectionFieldElement>
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (id<PaymentKitFlow>)getTextFieldIdentifiers __attribute__((swift_name("getTextFieldIdentifiers()")));
- (id<PaymentKitSectionFieldErrorController>)sectionFieldErrorController __attribute__((swift_name("sectionFieldErrorController()")));
- (void)setRawValueRawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap __attribute__((swift_name("setRawValue(rawValuesMap:)")));
@property (readonly) id<PaymentKitInputController> controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdministrativeAreaElement")))
@interface PaymentKitAdministrativeAreaElement : PaymentKitSectionSingleFieldElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitDropdownFieldController *)controller __attribute__((swift_name("init(identifier:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAdministrativeAreaElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitDropdownFieldController *)controller __attribute__((swift_name("doCopy(identifier:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitDropdownFieldController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol PaymentKitKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface PaymentKitKotlinEnum<E> : PaymentKitBase <PaymentKitKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Capitalization")))
@interface PaymentKitCapitalization : PaymentKitKotlinEnum<PaymentKitCapitalization *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitCapitalizationCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentKitCapitalization *none __attribute__((swift_name("none")));
@property (class, readonly) PaymentKitCapitalization *characters __attribute__((swift_name("characters")));
@property (class, readonly) PaymentKitCapitalization *words __attribute__((swift_name("words")));
@property (class, readonly) PaymentKitCapitalization *sentences __attribute__((swift_name("sentences")));
+ (PaymentKitKotlinArray<PaymentKitCapitalization *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Capitalization.Companion")))
@interface PaymentKitCapitalizationCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCapitalizationCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PaymentKitKotlinArray<id<PaymentKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardBillingAddressElement")))
@interface PaymentKitCardBillingAddressElement : PaymentKitAddressElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier rawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap addressRepository:(PaymentKitAddressRepository *)addressRepository countryCodes:(NSSet<NSString *> *)countryCodes countryDropdownFieldController:(PaymentKitDropdownFieldController *)countryDropdownFieldController sameAsShippingElement:(PaymentKitSameAsShippingElement * _Nullable)sameAsShippingElement shippingValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> * _Nullable)shippingValuesMap __attribute__((swift_name("init(identifier:rawValuesMap:addressRepository:countryCodes:countryDropdownFieldController:sameAsShippingElement:shippingValuesMap:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier addressRepository:(PaymentKitAddressRepository *)addressRepository rawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap addressType:(PaymentKitAddressType *)addressType countryCodes:(NSSet<NSString *> *)countryCodes countryDropdownFieldController:(PaymentKitDropdownFieldController *)countryDropdownFieldController sameAsShippingElement:(PaymentKitSameAsShippingElement * _Nullable)sameAsShippingElement shippingValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> * _Nullable)shippingValuesMap __attribute__((swift_name("init(identifier:addressRepository:rawValuesMap:addressType:countryCodes:countryDropdownFieldController:sameAsShippingElement:shippingValuesMap:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<PaymentKitFlow> hiddenIdentifiers __attribute__((swift_name("hiddenIdentifiers")));
@property (readonly) id<PaymentKitFlow> isComplete __attribute__((swift_name("isComplete")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardBillingSpec")))
@interface PaymentKitCardBillingSpec : PaymentKitFormItemSpec
- (instancetype)initWithApiPath:(PaymentKitIdentifierSpec *)apiPath allowedCountryCodes:(NSSet<NSString *> *)allowedCountryCodes __attribute__((swift_name("init(apiPath:allowedCountryCodes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCardBillingSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitCardBillingSpec *)doCopyApiPath:(PaymentKitIdentifierSpec *)apiPath allowedCountryCodes:(NSSet<NSString *> *)allowedCountryCodes __attribute__((swift_name("doCopy(apiPath:allowedCountryCodes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PaymentKitSectionElement *)transformInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues addressRepository:(PaymentKitAddressRepository *)addressRepository shippingValues:(NSDictionary<PaymentKitIdentifierSpec *, id> * _Nullable)shippingValues __attribute__((swift_name("transform(initialValues:addressRepository:shippingValues:)")));
@property (readonly) NSSet<NSString *> *allowedCountryCodes __attribute__((swift_name("allowedCountryCodes")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardBillingSpec.Companion")))
@interface PaymentKitCardBillingSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardBillingSpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDetailsController")))
@interface PaymentKitCardDetailsController : PaymentKitBase <PaymentKitSectionFieldErrorController>
- (instancetype)initWithInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues cardNumberReadOnly:(BOOL)cardNumberReadOnly __attribute__((swift_name("init(initialValues:cardNumberReadOnly:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PaymentKitCvcElement *cvcElement __attribute__((swift_name("cvcElement")));
@property (readonly) PaymentKitSimpleTextElement *expirationDateElement __attribute__((swift_name("expirationDateElement")));
@property (readonly) NSArray<id<PaymentKitSectionFieldElement>> *fields __attribute__((swift_name("fields")));
@property (readonly) PaymentKitInt * _Nullable label __attribute__((swift_name("label")));
@property (readonly) PaymentKitSimpleTextElement *nameElement __attribute__((swift_name("nameElement")));
@property (readonly) PaymentKitCardNumberElement *numberElement __attribute__((swift_name("numberElement")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDetailsElement")))
@interface PaymentKitCardDetailsElement : PaymentKitSectionMultiFieldElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier initialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues viewOnlyFields:(NSSet<PaymentKitIdentifierSpec *> *)viewOnlyFields controller:(PaymentKitCardDetailsController *)controller __attribute__((swift_name("init(identifier:initialValues:viewOnlyFields:controller:)"))) __attribute__((objc_designated_initializer));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (id<PaymentKitFlow>)getTextFieldIdentifiers __attribute__((swift_name("getTextFieldIdentifiers()")));
- (id<PaymentKitSectionFieldErrorController>)sectionFieldErrorController __attribute__((swift_name("sectionFieldErrorController()")));
- (void)setRawValueRawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap __attribute__((swift_name("setRawValue(rawValuesMap:)")));
@property (readonly) PaymentKitCardDetailsController *controller __attribute__((swift_name("controller")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDetailsSectionController")))
@interface PaymentKitCardDetailsSectionController : PaymentKitBase <PaymentKitSectionFieldErrorController>
- (instancetype)initWithInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues viewOnlyFields:(NSSet<PaymentKitIdentifierSpec *> *)viewOnlyFields __attribute__((swift_name("init(initialValues:viewOnlyFields:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PaymentKitCardDetailsElement *cardDetailsElement __attribute__((swift_name("cardDetailsElement")));
@property (readonly) id<PaymentKitFlow> isComplete __attribute__((swift_name("isComplete")));
@end

__attribute__((swift_name("FormElement")))
@interface PaymentKitFormElement : PaymentKitBase
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (id<PaymentKitFlow>)getTextFieldIdentifiers __attribute__((swift_name("getTextFieldIdentifiers()")));
@property (readonly) id<PaymentKitController> _Nullable controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDetailsSectionElement")))
@interface PaymentKitCardDetailsSectionElement : PaymentKitFormElement
- (instancetype)initWithInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues viewOnlyFields:(NSSet<PaymentKitIdentifierSpec *> *)viewOnlyFields identifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitCardDetailsSectionController *)controller __attribute__((swift_name("init(initialValues:viewOnlyFields:identifier:controller:)"))) __attribute__((objc_designated_initializer));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (id<PaymentKitFlow>)getTextFieldIdentifiers __attribute__((swift_name("getTextFieldIdentifiers()")));
@property (readonly) PaymentKitCardDetailsSectionController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDetailsSectionSpec")))
@interface PaymentKitCardDetailsSectionSpec : PaymentKitFormItemSpec
- (instancetype)initWithApiPath:(PaymentKitIdentifierSpec *)apiPath __attribute__((swift_name("init(apiPath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCardDetailsSectionSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitCardDetailsSectionSpec *)doCopyApiPath:(PaymentKitIdentifierSpec *)apiPath __attribute__((swift_name("doCopy(apiPath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PaymentKitFormElement *)transformInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues viewOnlyFields:(NSSet<PaymentKitIdentifierSpec *> *)viewOnlyFields __attribute__((swift_name("transform(initialValues:viewOnlyFields:)")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDetailsSectionSpec.Companion")))
@interface PaymentKitCardDetailsSectionSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardDetailsSectionSpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardNumberConfig")))
@interface PaymentKitCardNumberConfig : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)convertToRawDisplayName:(NSString *)displayName __attribute__((swift_name("convertToRaw(displayName:)")));
- (id<PaymentKitTextFieldState>)determineStateBrand:(PaymentKitCardBrand *)brand number:(NSString *)number numberAllowedDigits:(int32_t)numberAllowedDigits __attribute__((swift_name("determineState(brand:number:numberAllowedDigits:)")));
- (NSString *)filterUserTyped:(NSString *)userTyped __attribute__((swift_name("filter(userTyped:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboard __attribute__((swift_name("keyboard")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end

__attribute__((swift_name("CardNumberController")))
@interface PaymentKitCardNumberController : PaymentKitBase <PaymentKitTextFieldController, PaymentKitSectionFieldErrorController>
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardNumberEditableController")))
@interface PaymentKitCardNumberEditableController : PaymentKitCardNumberController
- (instancetype)initWithCardTextFieldConfig:(PaymentKitCardNumberConfig *)cardTextFieldConfig initialValue:(NSString * _Nullable)initialValue __attribute__((swift_name("init(cardTextFieldConfig:initialValue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCardTextFieldConfig:(PaymentKitCardNumberConfig *)cardTextFieldConfig workContext:(id<PaymentKitKotlinCoroutineContext>)workContext staticCardAccountRanges:(id<PaymentKitStaticCardAccountRanges>)staticCardAccountRanges initialValue:(NSString * _Nullable)initialValue showOptionalLabel:(BOOL)showOptionalLabel __attribute__((swift_name("init(cardTextFieldConfig:workContext:staticCardAccountRanges:initialValue:showOptionalLabel:)"))) __attribute__((objc_designated_initializer));
- (void)onFocusChangeNewHasFocus:(BOOL)newHasFocus __attribute__((swift_name("onFocusChange(newHasFocus:)")));
- (void)onRawValueChangeRawValue:(NSString *)rawValue __attribute__((swift_name("onRawValueChange(rawValue:)")));
- (id<PaymentKitTextFieldState> _Nullable)onValueChangeDisplayFormatted:(NSString *)displayFormatted __attribute__((swift_name("onValueChange(displayFormatted:)")));
@property (readonly) PaymentKitCardAccountRangeService *accountRangeService __attribute__((swift_name("accountRangeService")));
@property (readonly) id<PaymentKitFlow> contentDescription __attribute__((swift_name("contentDescription")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboardType __attribute__((swift_name("keyboardType")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardNumberElement")))
@interface PaymentKitCardNumberElement : PaymentKitSectionSingleFieldElement
- (instancetype)initWithIdentifierImpl:(PaymentKitIdentifierSpec *)identifierImpl controller:(PaymentKitCardNumberController *)controller __attribute__((swift_name("init(identifierImpl:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardNumberElement *)doCopyIdentifierImpl:(PaymentKitIdentifierSpec *)identifierImpl controller:(PaymentKitCardNumberController *)controller __attribute__((swift_name("doCopy(identifierImpl:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setRawValueRawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap __attribute__((swift_name("setRawValue(rawValuesMap:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitCardNumberController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifierImpl __attribute__((swift_name("identifierImpl")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Country")))
@interface PaymentKitCountry : PaymentKitBase
- (instancetype)initWithCode:(NSString *)code name:(NSString *)name __attribute__((swift_name("init(code:name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCode:(PaymentKitCountryCode *)code name_:(NSString *)name __attribute__((swift_name("init(code:name_:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCountry *)doCopyCode:(PaymentKitCountryCode *)code name:(NSString *)name __attribute__((swift_name("doCopy(code:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitCountryCode *code __attribute__((swift_name("code")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryCode")))
@interface PaymentKitCountryCode : PaymentKitBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCountryCodeCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitCountryCode *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryCode.Companion")))
@interface PaymentKitCountryCodeCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCountryCodeCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitCountryCode *)createValue:(NSString *)value __attribute__((swift_name("create(value:)")));
- (BOOL)isAECountryCode:(PaymentKitCountryCode * _Nullable)countryCode __attribute__((swift_name("isAE(countryCode:)")));
- (BOOL)isCACountryCode:(PaymentKitCountryCode * _Nullable)countryCode __attribute__((swift_name("isCA(countryCode:)")));
- (BOOL)isGBCountryCode:(PaymentKitCountryCode * _Nullable)countryCode __attribute__((swift_name("isGB(countryCode:)")));
- (BOOL)isUSCountryCode:(PaymentKitCountryCode * _Nullable)countryCode __attribute__((swift_name("isUS(countryCode:)")));
@property (readonly) PaymentKitCountryCode *AE __attribute__((swift_name("AE")));
@property (readonly) PaymentKitCountryCode *CA __attribute__((swift_name("CA")));
@property (readonly) PaymentKitCountryCode *GB __attribute__((swift_name("GB")));
@property (readonly) PaymentKitCountryCode *SA __attribute__((swift_name("SA")));
@property (readonly) PaymentKitCountryCode *US __attribute__((swift_name("US")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryConfig")))
@interface PaymentKitCountryConfig : PaymentKitBase <PaymentKitDropdownConfig>
- (instancetype)initWithOnlyShowCountryCodes:(NSSet<NSString *> *)onlyShowCountryCodes tinyMode:(BOOL)tinyMode collapsedLabelMapper:(NSString *(^)(PaymentKitCountry *))collapsedLabelMapper expandedLabelMapper:(NSString *(^)(PaymentKitCountry *))expandedLabelMapper __attribute__((swift_name("init(onlyShowCountryCodes:tinyMode:collapsedLabelMapper:expandedLabelMapper:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCountryConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)getSelectedItemLabelIndex:(int32_t)index __attribute__((swift_name("getSelectedItemLabel(index:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) NSArray<NSString *> *displayItems __attribute__((swift_name("displayItems")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSSet<NSString *> *onlyShowCountryCodes __attribute__((swift_name("onlyShowCountryCodes")));
@property (readonly) NSArray<NSString *> *rawItems __attribute__((swift_name("rawItems")));
@property (readonly) BOOL tinyMode __attribute__((swift_name("tinyMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryConfig.Companion")))
@interface PaymentKitCountryConfigCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCountryConfigCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryElement")))
@interface PaymentKitCountryElement : PaymentKitSectionSingleFieldElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitDropdownFieldController *)controller __attribute__((swift_name("init(identifier:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCountryElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitDropdownFieldController *)controller __attribute__((swift_name("doCopy(identifier:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitDropdownFieldController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountrySpec")))
@interface PaymentKitCountrySpec : PaymentKitFormItemSpec
- (instancetype)initWithApiPath:(PaymentKitIdentifierSpec *)apiPath allowedCountryCodes:(NSSet<NSString *> *)allowedCountryCodes __attribute__((swift_name("init(apiPath:allowedCountryCodes:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCountrySpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitCountrySpec *)doCopyApiPath:(PaymentKitIdentifierSpec *)apiPath allowedCountryCodes:(NSSet<NSString *> *)allowedCountryCodes __attribute__((swift_name("doCopy(apiPath:allowedCountryCodes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PaymentKitSectionElement *)transformInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues __attribute__((swift_name("transform(initialValues:)")));
@property (readonly) NSSet<NSString *> *allowedCountryCodes __attribute__((swift_name("allowedCountryCodes")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountrySpec.Companion")))
@interface PaymentKitCountrySpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCountrySpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountryUtils")))
@interface PaymentKitCountryUtils : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)countryUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCountryUtils *shared __attribute__((swift_name("shared")));
- (BOOL)doesCountryUsePostalCodeCountryCode:(NSString *)countryCode __attribute__((swift_name("doesCountryUsePostalCode(countryCode:)"))) __attribute__((deprecated("Use with parameter CountryCode")));
- (BOOL)doesCountryUsePostalCodeCountryCode_:(PaymentKitCountryCode *)countryCode __attribute__((swift_name("doesCountryUsePostalCode(countryCode_:)")));
- (PaymentKitCountry * _Nullable)getCountryByCodeCountryCode:(PaymentKitCountryCode * _Nullable)countryCode __attribute__((swift_name("getCountryByCode(countryCode:)")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
- (PaymentKitCountryCode * _Nullable)getCountryCodeByNameCountryName:(NSString *)countryName __attribute__((swift_name("getCountryCodeByName(countryName:)")));
- (NSString *)getDisplayCountryCountryCode:(PaymentKitCountryCode *)countryCode __attribute__((swift_name("getDisplayCountry(countryCode:)")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
- (NSArray<PaymentKitCountry *> *)getOrderedCountries __attribute__((swift_name("getOrderedCountries()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CvcConfig")))
@interface PaymentKitCvcConfig : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)convertToRawDisplayName:(NSString *)displayName __attribute__((swift_name("convertToRaw(displayName:)")));
- (id<PaymentKitTextFieldState>)determineStateBrand:(PaymentKitCardBrand *)brand number:(NSString *)number numberAllowedDigits:(int32_t)numberAllowedDigits __attribute__((swift_name("determineState(brand:number:numberAllowedDigits:)")));
- (NSString *)filterUserTyped:(NSString *)userTyped __attribute__((swift_name("filter(userTyped:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboard __attribute__((swift_name("keyboard")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CvcController")))
@interface PaymentKitCvcController : PaymentKitBase <PaymentKitTextFieldController, PaymentKitSectionFieldErrorController>
- (instancetype)initWithCvcTextFieldConfig:(PaymentKitCvcConfig *)cvcTextFieldConfig cardBrandFlow:(id<PaymentKitFlow>)cardBrandFlow initialValue:(NSString * _Nullable)initialValue showOptionalLabel:(BOOL)showOptionalLabel __attribute__((swift_name("init(cvcTextFieldConfig:cardBrandFlow:initialValue:showOptionalLabel:)"))) __attribute__((objc_designated_initializer));
- (void)onFocusChangeNewHasFocus:(BOOL)newHasFocus __attribute__((swift_name("onFocusChange(newHasFocus:)")));
- (void)onRawValueChangeRawValue:(NSString *)rawValue __attribute__((swift_name("onRawValueChange(rawValue:)")));
- (id<PaymentKitTextFieldState> _Nullable)onValueChangeDisplayFormatted:(NSString *)displayFormatted __attribute__((swift_name("onValueChange(displayFormatted:)")));
@property (readonly) id<PaymentKitFlow> contentDescription __attribute__((swift_name("contentDescription")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboardType __attribute__((swift_name("keyboardType")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CvcElement")))
@interface PaymentKitCvcElement : PaymentKitSectionSingleFieldElement
- (instancetype)initWithIdentifierImpl:(PaymentKitIdentifierSpec *)identifierImpl controller:(PaymentKitCvcController *)controller __attribute__((swift_name("init(identifierImpl:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCvcElement *)doCopyIdentifierImpl:(PaymentKitIdentifierSpec *)identifierImpl controller:(PaymentKitCvcController *)controller __attribute__((swift_name("doCopy(identifierImpl:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setRawValueRawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap __attribute__((swift_name("setRawValue(rawValuesMap:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitCvcController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifierImpl __attribute__((swift_name("identifierImpl")));
@end

__attribute__((swift_name("TextFieldConfig")))
@protocol PaymentKitTextFieldConfig
@required
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)convertToRawDisplayName:(NSString *)displayName __attribute__((swift_name("convertToRaw(displayName:)")));
- (id<PaymentKitTextFieldState>)determineStateInput:(NSString *)input __attribute__((swift_name("determineState(input:)")));
- (NSString *)filterUserTyped:(NSString *)userTyped __attribute__((swift_name("filter(userTyped:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboard __attribute__((swift_name("keyboard")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) id<PaymentKitStateFlow> loading __attribute__((swift_name("loading")));
@property (readonly) id<PaymentKitStateFlow> trailingIcon __attribute__((swift_name("trailingIcon")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateConfig")))
@interface PaymentKitDateConfig : PaymentKitBase <PaymentKitTextFieldConfig>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PaymentKitDateConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)convertToRawDisplayName:(NSString *)displayName __attribute__((swift_name("convertToRaw(displayName:)")));
- (id<PaymentKitTextFieldState>)determineStateInput:(NSString *)input __attribute__((swift_name("determineState(input:)")));
- (NSString *)filterUserTyped:(NSString *)userTyped __attribute__((swift_name("filter(userTyped:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboard __attribute__((swift_name("keyboard")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) id<PaymentKitStateFlow> loading __attribute__((swift_name("loading")));
@property (readonly) id<PaymentKitStateFlow> trailingIcon __attribute__((swift_name("trailingIcon")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DateConfig.Companion")))
@interface PaymentKitDateConfigCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitDateConfigCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitTextFieldState>)determineTextFieldStateMonth1Based:(int32_t)month1Based twoDigitYear:(int32_t)twoDigitYear current1BasedMonth:(int32_t)current1BasedMonth currentYear:(int32_t)currentYear __attribute__((swift_name("determineTextFieldState(month1Based:twoDigitYear:current1BasedMonth:currentYear:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayField")))
@interface PaymentKitDisplayField : PaymentKitKotlinEnum<PaymentKitDisplayField *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitDisplayFieldCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentKitDisplayField *country __attribute__((swift_name("country")));
+ (PaymentKitKotlinArray<PaymentKitDisplayField *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DisplayField.Companion")))
@interface PaymentKitDisplayFieldCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitDisplayFieldCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PaymentKitKotlinArray<id<PaymentKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DropdownFieldController")))
@interface PaymentKitDropdownFieldController : PaymentKitBase <PaymentKitInputController, PaymentKitSectionFieldErrorController>
- (instancetype)initWithConfig:(id<PaymentKitDropdownConfig>)config initialValue:(NSString * _Nullable)initialValue __attribute__((swift_name("init(config:initialValue:)"))) __attribute__((objc_designated_initializer));
- (NSString *)getSelectedItemLabelIndex:(int32_t)index __attribute__((swift_name("getSelectedItemLabel(index:)")));
- (void)onRawValueChangeRawValue:(NSString *)rawValue __attribute__((swift_name("onRawValueChange(rawValue:)")));
- (void)onValueChangeIndex:(int32_t)index __attribute__((swift_name("onValueChange(index:)")));
@property (readonly) NSArray<NSString *> *displayItems __attribute__((swift_name("displayItems")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@property (readonly) BOOL tinyMode __attribute__((swift_name("tinyMode")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DropdownItemSpec")))
@interface PaymentKitDropdownItemSpec : PaymentKitBase
- (instancetype)initWithApiValue:(NSString * _Nullable)apiValue displayText:(NSString *)displayText __attribute__((swift_name("init(apiValue:displayText:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitDropdownItemSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitDropdownItemSpec *)doCopyApiValue:(NSString * _Nullable)apiValue displayText:(NSString *)displayText __attribute__((swift_name("doCopy(apiValue:displayText:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable apiValue __attribute__((swift_name("apiValue")));
@property (readonly) NSString *displayText __attribute__((swift_name("displayText")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DropdownItemSpec.Companion")))
@interface PaymentKitDropdownItemSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitDropdownItemSpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DropdownSpec")))
@interface PaymentKitDropdownSpec : PaymentKitFormItemSpec
- (instancetype)initWithApiPath:(PaymentKitIdentifierSpec *)apiPath labelTranslationId:(PaymentKitTranslationId *)labelTranslationId items:(NSArray<PaymentKitDropdownItemSpec *> *)items __attribute__((swift_name("init(apiPath:labelTranslationId:items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitDropdownSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitDropdownSpec *)doCopyApiPath:(PaymentKitIdentifierSpec *)apiPath labelTranslationId:(PaymentKitTranslationId *)labelTranslationId items:(NSArray<PaymentKitDropdownItemSpec *> *)items __attribute__((swift_name("doCopy(apiPath:labelTranslationId:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PaymentKitSectionElement *)transformInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues __attribute__((swift_name("transform(initialValues:)")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@property (readonly) NSArray<PaymentKitDropdownItemSpec *> *items __attribute__((swift_name("items")));
@property (readonly) PaymentKitTranslationId *labelTranslationId __attribute__((swift_name("labelTranslationId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DropdownSpec.Companion")))
@interface PaymentKitDropdownSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitDropdownSpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyFormElement")))
@interface PaymentKitEmptyFormElement : PaymentKitFormElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(id<PaymentKitController> _Nullable)controller __attribute__((swift_name("init(identifier:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitEmptyFormElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(id<PaymentKitController> _Nullable)controller __attribute__((swift_name("doCopy(identifier:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PaymentKitController> _Nullable controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FieldError")))
@interface PaymentKitFieldError : PaymentKitBase
- (instancetype)initWithErrorMessage:(NSString *)errorMessage formatArgs:(PaymentKitKotlinArray<id> * _Nullable)formatArgs __attribute__((swift_name("init(errorMessage:formatArgs:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) PaymentKitKotlinArray<id> * _Nullable formatArgs __attribute__((swift_name("formatArgs")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormFieldEntry")))
@interface PaymentKitFormFieldEntry : PaymentKitBase
- (instancetype)initWithValue:(NSString * _Nullable)value isComplete:(BOOL)isComplete __attribute__((swift_name("init(value:isComplete:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitFormFieldEntry *)doCopyValue:(NSString * _Nullable)value isComplete:(BOOL)isComplete __attribute__((swift_name("doCopy(value:isComplete:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isComplete __attribute__((swift_name("isComplete")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormItemSpec.Companion")))
@interface PaymentKitFormItemSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitFormItemSpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol PaymentKitKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<PaymentKitKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PaymentKitKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol PaymentKitKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<PaymentKitKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<PaymentKitKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol PaymentKitKotlinx_serialization_coreKSerializer <PaymentKitKotlinx_serialization_coreSerializationStrategy, PaymentKitKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJsonContentPolymorphicSerializer")))
@interface PaymentKitKotlinx_serialization_jsonJsonContentPolymorphicSerializer<T> : PaymentKitBase <PaymentKitKotlinx_serialization_coreKSerializer>
- (instancetype)initWithBaseClass:(id<PaymentKitKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer));
- (T)deserializeDecoder:(id<PaymentKitKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<PaymentKitKotlinx_serialization_coreDeserializationStrategy>)selectDeserializerElement:(PaymentKitKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("selectDeserializer(element:)")));
- (void)serializeEncoder:(id<PaymentKitKotlinx_serialization_coreEncoder>)encoder value:(T)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<PaymentKitKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormItemSpecSerializer")))
@interface PaymentKitFormItemSpecSerializer : PaymentKitKotlinx_serialization_jsonJsonContentPolymorphicSerializer<PaymentKitFormItemSpec *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseClass:(id<PaymentKitKotlinKClass>)baseClass __attribute__((swift_name("init(baseClass:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)formItemSpecSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitFormItemSpecSerializer *shared __attribute__((swift_name("shared")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id<PaymentKitKotlinx_serialization_coreDeserializationStrategy>)selectDeserializerElement:(PaymentKitKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("selectDeserializer(element:)")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentifierSpec")))
@interface PaymentKitIdentifierSpec : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithV1:(NSString *)v1 ignoreField:(BOOL)ignoreField __attribute__((swift_name("init(v1:ignoreField:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitIdentifierSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitIdentifierSpec *)doCopyV1:(NSString *)v1 ignoreField:(BOOL)ignoreField __attribute__((swift_name("doCopy(v1:ignoreField:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL ignoreField __attribute__((swift_name("ignoreField")));
@property (readonly) NSString *v1 __attribute__((swift_name("v1")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentifierSpec.Companion")))
@interface PaymentKitIdentifierSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitIdentifierSpecCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitIdentifierSpec *)GenericValueImpl:(NSString *)valueImpl __attribute__((swift_name("Generic(valueImpl:)")));

/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
- (PaymentKitIdentifierSpec *)getValue:(NSString *)value __attribute__((swift_name("get(value:)")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) PaymentKitIdentifierSpec *CardBrand __attribute__((swift_name("CardBrand")));
@property (readonly) PaymentKitIdentifierSpec *CardCvc __attribute__((swift_name("CardCvc")));
@property (readonly) PaymentKitIdentifierSpec *CardExpMonth __attribute__((swift_name("CardExpMonth")));
@property (readonly) PaymentKitIdentifierSpec *CardExpYear __attribute__((swift_name("CardExpYear")));
@property (readonly) PaymentKitIdentifierSpec *CardNumber __attribute__((swift_name("CardNumber")));
@property (readonly) PaymentKitIdentifierSpec *City __attribute__((swift_name("City")));
@property (readonly) PaymentKitIdentifierSpec *Country __attribute__((swift_name("Country")));
@property (readonly) PaymentKitIdentifierSpec *DependentLocality __attribute__((swift_name("DependentLocality")));
@property (readonly) PaymentKitIdentifierSpec *Email __attribute__((swift_name("Email")));
@property (readonly) PaymentKitIdentifierSpec *Line1 __attribute__((swift_name("Line1")));
@property (readonly) PaymentKitIdentifierSpec *Line2 __attribute__((swift_name("Line2")));
@property (readonly) PaymentKitIdentifierSpec *Name __attribute__((swift_name("Name")));
@property (readonly) PaymentKitIdentifierSpec *OneLineAddress __attribute__((swift_name("OneLineAddress")));
@property (readonly) PaymentKitIdentifierSpec *Phone __attribute__((swift_name("Phone")));
@property (readonly) PaymentKitIdentifierSpec *PostalCode __attribute__((swift_name("PostalCode")));
@property (readonly) PaymentKitIdentifierSpec *SameAsShipping __attribute__((swift_name("SameAsShipping")));
@property (readonly) PaymentKitIdentifierSpec *SaveForFutureUse __attribute__((swift_name("SaveForFutureUse")));
@property (readonly) PaymentKitIdentifierSpec *SortingCode __attribute__((swift_name("SortingCode")));
@property (readonly) PaymentKitIdentifierSpec *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyboardType")))
@interface PaymentKitKeyboardType : PaymentKitKotlinEnum<PaymentKitKeyboardType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKeyboardTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentKitKeyboardType *text __attribute__((swift_name("text")));
@property (class, readonly) PaymentKitKeyboardType *ascii __attribute__((swift_name("ascii")));
@property (class, readonly) PaymentKitKeyboardType *number __attribute__((swift_name("number")));
@property (class, readonly) PaymentKitKeyboardType *phone __attribute__((swift_name("phone")));
@property (class, readonly) PaymentKitKeyboardType *uri __attribute__((swift_name("uri")));
@property (class, readonly) PaymentKitKeyboardType *email __attribute__((swift_name("email")));
@property (class, readonly) PaymentKitKeyboardType *password __attribute__((swift_name("password")));
@property (class, readonly) PaymentKitKeyboardType *numberpassword __attribute__((swift_name("numberpassword")));
+ (PaymentKitKotlinArray<PaymentKitKeyboardType *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KeyboardType.Companion")))
@interface PaymentKitKeyboardTypeCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKeyboardTypeCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PaymentKitKotlinArray<id<PaymentKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutSpec")))
@interface PaymentKitLayoutSpec : PaymentKitBase
- (instancetype)initWithItems:(NSArray<PaymentKitFormItemSpec *> *)items __attribute__((swift_name("init(items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitLayoutSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitLayoutSpec *)doCopyItems:(NSArray<PaymentKitFormItemSpec *> *)items __attribute__((swift_name("doCopy(items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PaymentKitFormItemSpec *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LayoutSpec.Companion")))
@interface PaymentKitLayoutSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitLayoutSpecCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitLayoutSpec *)create __attribute__((swift_name("create()")));
- (PaymentKitLayoutSpec *)createItem:(PaymentKitKotlinArray<PaymentKitFormItemSpec *> *)item __attribute__((swift_name("create(item:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NameConfig")))
@interface PaymentKitNameConfig : PaymentKitBase <PaymentKitTextFieldConfig>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)convertToRawDisplayName:(NSString *)displayName __attribute__((swift_name("convertToRaw(displayName:)")));
- (id<PaymentKitTextFieldState>)determineStateInput:(NSString *)input __attribute__((swift_name("determineState(input:)")));
- (NSString *)filterUserTyped:(NSString *)userTyped __attribute__((swift_name("filter(userTyped:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboard __attribute__((swift_name("keyboard")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) id<PaymentKitStateFlow> loading __attribute__((swift_name("loading")));
@property (readonly) id<PaymentKitMutableStateFlow> trailingIcon __attribute__((swift_name("trailingIcon")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NameSpec")))
@interface PaymentKitNameSpec : PaymentKitFormItemSpec
- (instancetype)initWithApiPath:(PaymentKitIdentifierSpec *)apiPath labelTranslationId:(PaymentKitTranslationId *)labelTranslationId __attribute__((swift_name("init(apiPath:labelTranslationId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitNameSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitNameSpec *)doCopyApiPath:(PaymentKitIdentifierSpec *)apiPath labelTranslationId:(PaymentKitTranslationId *)labelTranslationId __attribute__((swift_name("doCopy(apiPath:labelTranslationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PaymentKitSectionElement *)transformInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues __attribute__((swift_name("transform(initialValues:)")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@property (readonly) PaymentKitTranslationId *labelTranslationId __attribute__((swift_name("labelTranslationId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NameSpec.Companion")))
@interface PaymentKitNameSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitNameSpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OTPController")))
@interface PaymentKitOTPController : PaymentKitBase <PaymentKitController>
- (instancetype)initWithOtpLength:(int32_t)otpLength __attribute__((swift_name("init(otpLength:)"))) __attribute__((objc_designated_initializer));
- (int32_t)onValueChangedIndex:(int32_t)index text:(NSString *)text __attribute__((swift_name("onValueChanged(index:text:)")));
- (void)onValueChangedText:(NSString *)text __attribute__((swift_name("onValueChanged(text:)")));
@property (readonly) id<PaymentKitFlow> fieldValue __attribute__((swift_name("fieldValue")));
@property (readonly) int32_t otpLength __attribute__((swift_name("otpLength")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OTPElement")))
@interface PaymentKitOTPElement : PaymentKitFormElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitOTPController *)controller __attribute__((swift_name("init(identifier:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitOTPElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitOTPController *)controller __attribute__((swift_name("doCopy(identifier:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitOTPController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OTPSpec")))
@interface PaymentKitOTPSpec : PaymentKitFormItemSpec
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oTPSpec __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitOTPSpec *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PaymentKitKotlinArray<id<PaymentKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
- (PaymentKitOTPElement *)transform __attribute__((swift_name("transform()")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@end

__attribute__((swift_name("PaymentScreen")))
@interface PaymentKitPaymentScreen : PaymentKitBase
@property (readonly) NSString *route __attribute__((swift_name("route")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentScreen.AddCard")))
@interface PaymentKitPaymentScreenAddCard : PaymentKitPaymentScreen
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)addCard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPaymentScreenAddCard *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentScreen.Biometrics")))
@interface PaymentKitPaymentScreenBiometrics : PaymentKitPaymentScreen
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)biometrics __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPaymentScreenBiometrics *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentScreen.EditCard")))
@interface PaymentKitPaymentScreenEditCard : PaymentKitPaymentScreen
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)editCard __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPaymentScreenEditCard *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentScreen.Launcher")))
@interface PaymentKitPaymentScreenLauncher : PaymentKitPaymentScreen
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)launcher __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPaymentScreenLauncher *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentScreen.Otp")))
@interface PaymentKitPaymentScreenOtp : PaymentKitPaymentScreen
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)otp __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPaymentScreenOtp *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentScreen.PaymentConfirmation")))
@interface PaymentKitPaymentScreenPaymentConfirmation : PaymentKitPaymentScreen
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paymentConfirmation __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPaymentScreenPaymentConfirmation *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentScreen.PaymentMethods")))
@interface PaymentKitPaymentScreenPaymentMethods : PaymentKitPaymentScreen
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)paymentMethods __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPaymentScreenPaymentMethods *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentScreen.PhoneNumber")))
@interface PaymentKitPaymentScreenPhoneNumber : PaymentKitPaymentScreen
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phoneNumber __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPaymentScreenPhoneNumber *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentScreen.Success")))
@interface PaymentKitPaymentScreenSuccess : PaymentKitPaymentScreen
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)success __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPaymentScreenSuccess *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberController")))
@interface PaymentKitPhoneNumberController : PaymentKitBase <PaymentKitInputController>
@property (class, readonly, getter=companion) PaymentKitPhoneNumberControllerCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)getCountryCode __attribute__((swift_name("getCountryCode()")));
- (NSString *)getE164PhoneNumberPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("getE164PhoneNumber(phoneNumber:)")));
- (void)onFocusChangeNewHasFocus:(BOOL)newHasFocus __attribute__((swift_name("onFocusChange(newHasFocus:)")));
- (void)onRawValueChangeRawValue:(NSString *)rawValue __attribute__((swift_name("onRawValueChange(rawValue:)")));
- (PaymentKitKotlinUnit * _Nullable)onSelectedCountryIndexIndex:(int32_t)index __attribute__((swift_name("onSelectedCountryIndex(index:)")));
- (void)onValueChangeDisplayFormatted:(NSString *)displayFormatted __attribute__((swift_name("onValueChange(displayFormatted:)")));
@property (readonly) PaymentKitDropdownFieldController *countryDropdownController __attribute__((swift_name("countryDropdownController")));
@property (readonly) NSString *initialPhoneNumber __attribute__((swift_name("initialPhoneNumber")));
@property (readonly) id<PaymentKitMutableStateFlow> phoneNumberFormatter __attribute__((swift_name("phoneNumberFormatter")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberController.Companion")))
@interface PaymentKitPhoneNumberControllerCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberControllerCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitPhoneNumberController *)createPhoneNumberControllerInitialValue:(NSString *)initialValue initiallySelectedCountryCode:(NSString * _Nullable)initiallySelectedCountryCode __attribute__((swift_name("createPhoneNumberController(initialValue:initiallySelectedCountryCode:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberElement")))
@interface PaymentKitPhoneNumberElement : PaymentKitSectionSingleFieldElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitPhoneNumberController *)controller __attribute__((swift_name("init(identifier:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitPhoneNumberElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitPhoneNumberController *)controller __attribute__((swift_name("doCopy(identifier:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitPhoneNumberController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((swift_name("PhoneNumberFormatter")))
@interface PaymentKitPhoneNumberFormatter : PaymentKitBase
@property (class, readonly, getter=companion) PaymentKitPhoneNumberFormatterCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)toE164FormatInput:(NSString *)input __attribute__((swift_name("toE164Format(input:)")));
- (NSString *)userInputFilterInput:(NSString *)input __attribute__((swift_name("userInputFilter(input:)")));
@property (readonly) NSString *countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSString *placeholder __attribute__((swift_name("placeholder")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberFormatter.Companion")))
@interface PaymentKitPhoneNumberFormatterCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberFormatterCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitPhoneNumberFormatter *)forCountryCountryCode:(NSString *)countryCode __attribute__((swift_name("forCountry(countryCode:)")));
- (PaymentKitPhoneNumberFormatter * _Nullable)forPrefixPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("forPrefix(phoneNumber:)")));
- (PaymentKitInt * _Nullable)lengthForCountryCountryCode:(NSString *)countryCode __attribute__((swift_name("lengthForCountry(countryCode:)")));
@property (readonly) PaymentKitKotlinCharRange *VALID_INPUT_RANGE __attribute__((swift_name("VALID_INPUT_RANGE")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberFormatter.Metadata")))
@interface PaymentKitPhoneNumberFormatterMetadata : PaymentKitBase
- (instancetype)initWithPrefix:(NSString *)prefix regionCode:(NSString *)regionCode pattern:(NSString *)pattern __attribute__((swift_name("init(prefix:regionCode:pattern:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitPhoneNumberFormatterMetadata *)doCopyPrefix:(NSString *)prefix regionCode:(NSString *)regionCode pattern:(NSString *)pattern __attribute__((swift_name("doCopy(prefix:regionCode:pattern:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *pattern __attribute__((swift_name("pattern")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@property (readonly) NSString *regionCode __attribute__((swift_name("regionCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberFormatter.UnknownRegion")))
@interface PaymentKitPhoneNumberFormatterUnknownRegion : PaymentKitPhoneNumberFormatter
- (instancetype)initWithCountryCode:(NSString *)countryCode __attribute__((swift_name("init(countryCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)toE164FormatInput:(NSString *)input __attribute__((swift_name("toE164Format(input:)")));
- (NSString *)userInputFilterInput:(NSString *)input __attribute__((swift_name("userInputFilter(input:)")));
@property (readonly) NSString *countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSString *placeholder __attribute__((swift_name("placeholder")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberFormatter.WithRegion")))
@interface PaymentKitPhoneNumberFormatterWithRegion : PaymentKitPhoneNumberFormatter
- (instancetype)initWithMetadata:(PaymentKitPhoneNumberFormatterMetadata *)metadata __attribute__((swift_name("init(metadata:)"))) __attribute__((objc_designated_initializer));
- (NSString *)toE164FormatInput:(NSString *)input __attribute__((swift_name("toE164Format(input:)")));
- (NSString *)userInputFilterInput:(NSString *)input __attribute__((swift_name("userInputFilter(input:)")));
@property (readonly) NSString *countryCode __attribute__((swift_name("countryCode")));
@property (readonly) PaymentKitPhoneNumberFormatterMetadata *metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString *placeholder __attribute__((swift_name("placeholder")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberState_")))
@interface PaymentKitPhoneNumberState_ : PaymentKitKotlinEnum<PaymentKitPhoneNumberState_ *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitPhoneNumberState_Companion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentKitPhoneNumberState_ *hidden __attribute__((swift_name("hidden")));
@property (class, readonly) PaymentKitPhoneNumberState_ *optional __attribute__((swift_name("optional")));
@property (class, readonly) PaymentKitPhoneNumberState_ *required __attribute__((swift_name("required")));
+ (PaymentKitKotlinArray<PaymentKitPhoneNumberState_ *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberState_.Companion")))
@interface PaymentKitPhoneNumberState_Companion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberState_Companion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PaymentKitKotlinArray<id<PaymentKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgressStepperController")))
@interface PaymentKitProgressStepperController : PaymentKitBase
- (instancetype)initWithSteps:(NSArray<PaymentKitStep *> *)steps startingRoute:(NSString *)startingRoute __attribute__((swift_name("init(steps:startingRoute:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitProgressStepperControllerCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<PaymentKitStep *> *)allSteps __attribute__((swift_name("allSteps()")));
- (void)onRouteChangeNewRoute:(NSString *)newRoute __attribute__((swift_name("onRouteChange(newRoute:)")));
@property (readonly) id<PaymentKitFlow> currentStep __attribute__((swift_name("currentStep")));
@property (readonly) NSString *startingRoute __attribute__((swift_name("startingRoute")));
@property (readonly) id<PaymentKitFlow> successSteps __attribute__((swift_name("successSteps")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProgressStepperController.Companion")))
@interface PaymentKitProgressStepperControllerCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitProgressStepperControllerCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitProgressStepperController *)create __attribute__((swift_name("create()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RowController")))
@interface PaymentKitRowController : PaymentKitBase <PaymentKitSectionFieldErrorController>
- (instancetype)initWithFields:(NSArray<PaymentKitSectionSingleFieldElement *> *)fields __attribute__((swift_name("init(fields:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSArray<PaymentKitSectionSingleFieldElement *> *fields __attribute__((swift_name("fields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RowElement")))
@interface PaymentKitRowElement : PaymentKitSectionMultiFieldElement
- (instancetype)initWithIdentifierImpl:(PaymentKitIdentifierSpec *)identifierImpl fields:(NSArray<PaymentKitSectionSingleFieldElement *> *)fields controller:(PaymentKitRowController *)controller __attribute__((swift_name("init(identifierImpl:fields:controller:)"))) __attribute__((objc_designated_initializer));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (id<PaymentKitFlow>)getTextFieldIdentifiers __attribute__((swift_name("getTextFieldIdentifiers()")));
- (PaymentKitRowController *)sectionFieldErrorController __attribute__((swift_name("sectionFieldErrorController()")));
- (void)setRawValueRawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap __attribute__((swift_name("setRawValue(rawValuesMap:)")));
@property (readonly) PaymentKitRowController *controller __attribute__((swift_name("controller")));
@property (readonly) NSArray<PaymentKitSectionSingleFieldElement *> *fields __attribute__((swift_name("fields")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SameAsShippingController")))
@interface PaymentKitSameAsShippingController : PaymentKitBase <PaymentKitInputController>
- (instancetype)initWithInitialValue:(BOOL)initialValue __attribute__((swift_name("init(initialValue:)"))) __attribute__((objc_designated_initializer));
- (void)onRawValueChangeRawValue:(NSString *)rawValue __attribute__((swift_name("onRawValueChange(rawValue:)")));
- (void)onValueChangeValue:(BOOL)value __attribute__((swift_name("onValueChange(value:)")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@property (readonly) id<PaymentKitFlow> value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SameAsShippingElement")))
@interface PaymentKitSameAsShippingElement : PaymentKitSectionSingleFieldElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitSameAsShippingController *)controller __attribute__((swift_name("init(identifier:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitSameAsShippingElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitSameAsShippingController *)controller __attribute__((swift_name("doCopy(identifier:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)setRawValueRawValuesMap:(NSDictionary<PaymentKitIdentifierSpec *, id> *)rawValuesMap __attribute__((swift_name("setRawValue(rawValuesMap:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitSameAsShippingController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@property (readonly) BOOL shouldRenderOutsideCard __attribute__((swift_name("shouldRenderOutsideCard")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveForFutureUseController")))
@interface PaymentKitSaveForFutureUseController : PaymentKitBase <PaymentKitInputController>
- (instancetype)initWithSaveForFutureUseInitialValue:(BOOL)saveForFutureUseInitialValue __attribute__((swift_name("init(saveForFutureUseInitialValue:)"))) __attribute__((objc_designated_initializer));
- (void)onRawValueChangeRawValue:(NSString *)rawValue __attribute__((swift_name("onRawValueChange(rawValue:)")));
- (void)onValueChangeSaveForFutureUse:(BOOL)saveForFutureUse __attribute__((swift_name("onValueChange(saveForFutureUse:)")));
@property (readonly) id<PaymentKitFlow> saveForFutureUse __attribute__((swift_name("saveForFutureUse")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveForFutureUseElement")))
@interface PaymentKitSaveForFutureUseElement : PaymentKitFormElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitSaveForFutureUseController *)controller merchantName:(NSString * _Nullable)merchantName __attribute__((swift_name("init(identifier:controller:merchantName:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitSaveForFutureUseElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitSaveForFutureUseController *)controller merchantName:(NSString * _Nullable)merchantName __attribute__((swift_name("doCopy(identifier:controller:merchantName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitSaveForFutureUseController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@property (readonly) NSString * _Nullable merchantName __attribute__((swift_name("merchantName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveForFutureUseSpec")))
@interface PaymentKitSaveForFutureUseSpec : PaymentKitFormItemSpec
- (instancetype)initWithApiPath:(PaymentKitIdentifierSpec *)apiPath __attribute__((swift_name("init(apiPath:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitSaveForFutureUseSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitSaveForFutureUseSpec *)doCopyApiPath:(PaymentKitIdentifierSpec *)apiPath __attribute__((swift_name("doCopy(apiPath:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PaymentKitFormElement *)transformInitialValue:(BOOL)initialValue merchantName:(NSString *)merchantName __attribute__((swift_name("transform(initialValue:merchantName:)")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveForFutureUseSpec.Companion")))
@interface PaymentKitSaveForFutureUseSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSaveForFutureUseSpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SectionController")))
@interface PaymentKitSectionController : PaymentKitBase <PaymentKitController>
- (instancetype)initWithLabel:(NSString * _Nullable)label sectionFieldErrorControllers:(NSArray<id<PaymentKitSectionFieldErrorController>> *)sectionFieldErrorControllers __attribute__((swift_name("init(label:sectionFieldErrorControllers:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PaymentKitFlow> error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable label __attribute__((swift_name("label")));
@property (readonly) NSArray<id<PaymentKitSectionFieldErrorController>> *sectionFieldErrorControllers __attribute__((swift_name("sectionFieldErrorControllers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SectionElement")))
@interface PaymentKitSectionElement : PaymentKitFormElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier field:(id<PaymentKitSectionFieldElement>)field controller:(PaymentKitSectionController *)controller __attribute__((swift_name("init(identifier:field:controller:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier fields:(NSArray<id<PaymentKitSectionFieldElement>> *)fields controller:(PaymentKitSectionController *)controller __attribute__((swift_name("init(identifier:fields:controller:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitSectionElementCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitSectionElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier fields:(NSArray<id<PaymentKitSectionFieldElement>> *)fields controller:(PaymentKitSectionController *)controller __attribute__((swift_name("doCopy(identifier:fields:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (id<PaymentKitFlow>)getTextFieldIdentifiers __attribute__((swift_name("getTextFieldIdentifiers()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitSectionController *controller __attribute__((swift_name("controller")));
@property (readonly) NSArray<id<PaymentKitSectionFieldElement>> *fields __attribute__((swift_name("fields")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SectionElement.Companion")))
@interface PaymentKitSectionElementCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSectionElementCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitSectionElement *)wrapSectionFieldElements:(NSArray<id<PaymentKitSectionFieldElement>> *)sectionFieldElements label:(NSString * _Nullable)label __attribute__((swift_name("wrap(sectionFieldElements:label:)")));
- (PaymentKitSectionElement *)wrapSectionFieldElement:(id<PaymentKitSectionFieldElement>)sectionFieldElement label:(NSString * _Nullable)label __attribute__((swift_name("wrap(sectionFieldElement:label:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleDropdownConfig")))
@interface PaymentKitSimpleDropdownConfig : PaymentKitBase <PaymentKitDropdownConfig>
- (instancetype)initWithLabel:(NSString *)label items:(NSArray<PaymentKitDropdownItemSpec *> *)items __attribute__((swift_name("init(label:items:)"))) __attribute__((objc_designated_initializer));
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)getSelectedItemLabelIndex:(int32_t)index __attribute__((swift_name("getSelectedItemLabel(index:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) NSArray<NSString *> *displayItems __attribute__((swift_name("displayItems")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSArray<id> *rawItems __attribute__((swift_name("rawItems")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleDropdownElement")))
@interface PaymentKitSimpleDropdownElement : PaymentKitSectionSingleFieldElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitDropdownFieldController *)controller __attribute__((swift_name("init(identifier:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitSimpleDropdownElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(PaymentKitDropdownFieldController *)controller __attribute__((swift_name("doCopy(identifier:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitDropdownFieldController *controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleTextElement")))
@interface PaymentKitSimpleTextElement : PaymentKitSectionSingleFieldElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(id<PaymentKitTextFieldController>)controller __attribute__((swift_name("init(identifier:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitSimpleTextElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier controller:(id<PaymentKitTextFieldController>)controller __attribute__((swift_name("doCopy(identifier:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PaymentKitTextFieldController> controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleTextFieldConfig")))
@interface PaymentKitSimpleTextFieldConfig : PaymentKitBase <PaymentKitTextFieldConfig>
- (instancetype)initWithLabel:(NSString *)label keyboard:(PaymentKitKeyboardType *)keyboard trailingIcon:(id<PaymentKitMutableStateFlow>)trailingIcon __attribute__((swift_name("init(label:keyboard:trailingIcon:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitSimpleTextFieldConfigCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)convertFromRawRawValue:(NSString *)rawValue __attribute__((swift_name("convertFromRaw(rawValue:)")));
- (NSString *)convertToRawDisplayName:(NSString *)displayName __attribute__((swift_name("convertToRaw(displayName:)")));
- (id<PaymentKitTextFieldState>)determineStateInput:(NSString *)input __attribute__((swift_name("determineState(input:)")));
- (NSString *)filterUserTyped:(NSString *)userTyped __attribute__((swift_name("filter(userTyped:)")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboard __attribute__((swift_name("keyboard")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) id<PaymentKitMutableStateFlow> loading __attribute__((swift_name("loading")));
@property (readonly) id<PaymentKitMutableStateFlow> trailingIcon __attribute__((swift_name("trailingIcon")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleTextFieldConfig.Companion")))
@interface PaymentKitSimpleTextFieldConfigCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSimpleTextFieldConfigCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitSimpleTextFieldConfig *NAME __attribute__((swift_name("NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleTextFieldController")))
@interface PaymentKitSimpleTextFieldController : PaymentKitBase <PaymentKitTextFieldController, PaymentKitSectionFieldErrorController>
- (instancetype)initWithTextFieldConfig:(id<PaymentKitTextFieldConfig>)textFieldConfig showOptionalLabel:(BOOL)showOptionalLabel initialValue:(NSString * _Nullable)initialValue __attribute__((swift_name("init(textFieldConfig:showOptionalLabel:initialValue:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitSimpleTextFieldControllerCompanion *companion __attribute__((swift_name("companion")));
- (void)onFocusChangeNewHasFocus:(BOOL)newHasFocus __attribute__((swift_name("onFocusChange(newHasFocus:)")));
- (void)onRawValueChangeRawValue:(NSString *)rawValue __attribute__((swift_name("onRawValueChange(rawValue:)")));
- (id<PaymentKitTextFieldState> _Nullable)onValueChangeDisplayFormatted:(NSString *)displayFormatted __attribute__((swift_name("onValueChange(displayFormatted:)")));
@property (readonly) id<PaymentKitFlow> contentDescription __attribute__((swift_name("contentDescription")));
@property (readonly) NSString *debugLabel __attribute__((swift_name("debugLabel")));
@property (readonly) PaymentKitKeyboardType *keyboardType __attribute__((swift_name("keyboardType")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleTextFieldController.Companion")))
@interface PaymentKitSimpleTextFieldControllerCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSimpleTextFieldControllerCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitSimpleTextFieldController *)createNameSectionControllerInitialValue:(NSString * _Nullable)initialValue __attribute__((swift_name("createNameSectionController(initialValue:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleTextSpec")))
@interface PaymentKitSimpleTextSpec : PaymentKitFormItemSpec
- (instancetype)initWithApiPath:(PaymentKitIdentifierSpec *)apiPath label:(NSString *)label capitalization:(PaymentKitCapitalization *)capitalization keyboardType:(PaymentKitKeyboardType *)keyboardType showOptionalLabel:(BOOL)showOptionalLabel __attribute__((swift_name("init(apiPath:label:capitalization:keyboardType:showOptionalLabel:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitSimpleTextSpecCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitSimpleTextSpec *)doCopyApiPath:(PaymentKitIdentifierSpec *)apiPath label:(NSString *)label capitalization:(PaymentKitCapitalization *)capitalization keyboardType:(PaymentKitKeyboardType *)keyboardType showOptionalLabel:(BOOL)showOptionalLabel __attribute__((swift_name("doCopy(apiPath:label:capitalization:keyboardType:showOptionalLabel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PaymentKitSectionElement *)transformInitialValues:(NSDictionary<PaymentKitIdentifierSpec *, id> *)initialValues __attribute__((swift_name("transform(initialValues:)")));
@property (readonly) PaymentKitIdentifierSpec *apiPath __attribute__((swift_name("apiPath")));
@property (readonly) PaymentKitCapitalization *capitalization __attribute__((swift_name("capitalization")));
@property (readonly) PaymentKitKeyboardType *keyboardType __attribute__((swift_name("keyboardType")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) BOOL showOptionalLabel __attribute__((swift_name("showOptionalLabel")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SimpleTextSpec.Companion")))
@interface PaymentKitSimpleTextSpecCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSimpleTextSpecCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticTextElement")))
@interface PaymentKitStaticTextElement : PaymentKitFormElement
- (instancetype)initWithIdentifier:(PaymentKitIdentifierSpec *)identifier stringResId:(NSString *)stringResId controller:(id<PaymentKitInputController> _Nullable)controller __attribute__((swift_name("init(identifier:stringResId:controller:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitStaticTextElement *)doCopyIdentifier:(PaymentKitIdentifierSpec *)identifier stringResId:(NSString *)stringResId controller:(id<PaymentKitInputController> _Nullable)controller __attribute__((swift_name("doCopy(identifier:stringResId:controller:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id<PaymentKitFlow>)getFormFieldValueFlow __attribute__((swift_name("getFormFieldValueFlow()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PaymentKitInputController> _Nullable controller __attribute__((swift_name("controller")));
@property (readonly) PaymentKitIdentifierSpec *identifier __attribute__((swift_name("identifier")));
@property (readonly) NSString *stringResId __attribute__((swift_name("stringResId")));
@end

__attribute__((swift_name("TextFieldIcon")))
@interface PaymentKitTextFieldIcon : PaymentKitBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextFieldIcon.MultiTrailing")))
@interface PaymentKitTextFieldIconMultiTrailing : PaymentKitTextFieldIcon
- (instancetype)initWithStaticIcons:(NSArray<PaymentKitTextFieldIconTrailing *> *)staticIcons animatedIcons:(NSArray<PaymentKitTextFieldIconTrailing *> *)animatedIcons __attribute__((swift_name("init(staticIcons:animatedIcons:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitTextFieldIconMultiTrailing *)doCopyStaticIcons:(NSArray<PaymentKitTextFieldIconTrailing *> *)staticIcons animatedIcons:(NSArray<PaymentKitTextFieldIconTrailing *> *)animatedIcons __attribute__((swift_name("doCopy(staticIcons:animatedIcons:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PaymentKitTextFieldIconTrailing *> *animatedIcons __attribute__((swift_name("animatedIcons")));
@property (readonly) NSArray<PaymentKitTextFieldIconTrailing *> *staticIcons __attribute__((swift_name("staticIcons")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextFieldIcon.Trailing")))
@interface PaymentKitTextFieldIconTrailing : PaymentKitTextFieldIcon
- (instancetype)initWithIdRes:(NSString *)idRes contentDescription:(PaymentKitInt * _Nullable)contentDescription isTintable:(BOOL)isTintable onClick:(void (^ _Nullable)(void))onClick __attribute__((swift_name("init(idRes:contentDescription:isTintable:onClick:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitTextFieldIconTrailing *)doCopyIdRes:(NSString *)idRes contentDescription:(PaymentKitInt * _Nullable)contentDescription isTintable:(BOOL)isTintable onClick:(void (^ _Nullable)(void))onClick __attribute__((swift_name("doCopy(idRes:contentDescription:isTintable:onClick:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitInt * _Nullable contentDescription __attribute__((swift_name("contentDescription")));
@property (readonly) NSString *idRes __attribute__((swift_name("idRes")));
@property (readonly) BOOL isTintable __attribute__((swift_name("isTintable")));
@property (readonly) void (^ _Nullable onClick)(void) __attribute__((swift_name("onClick")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
*/
__attribute__((swift_name("TextFieldState")))
@protocol PaymentKitTextFieldState
@required
- (PaymentKitFieldError * _Nullable)getError __attribute__((swift_name("getError()")));
- (BOOL)isBlank __attribute__((swift_name("isBlank()")));
- (BOOL)isFull __attribute__((swift_name("isFull()")));
- (BOOL)isValid __attribute__((swift_name("isValid()")));
- (BOOL)shouldShowErrorHasFocus:(BOOL)hasFocus __attribute__((swift_name("shouldShowError(hasFocus:)")));
@end


/**
 * @note annotations
 *   androidx.annotation.RestrictTo(value=[Scope.LIBRARY_GROUP_PREFIX])
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TranslationId")))
@interface PaymentKitTranslationId : PaymentKitKotlinEnum<PaymentKitTranslationId *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitTranslationIdCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentKitTranslationId *addressname __attribute__((swift_name("addressname")));
+ (PaymentKitKotlinArray<PaymentKitTranslationId *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *resourceId __attribute__((swift_name("resourceId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TranslationId.Companion")))
@interface PaymentKitTranslationIdCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitTranslationIdCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(PaymentKitKotlinArray<id<PaymentKitKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountRange")))
@interface PaymentKitAccountRange : PaymentKitBase
- (PaymentKitAccountRange *)doCopyBinRange:(PaymentKitBinRange *)binRange panLength:(int32_t)panLength brandInfo:(PaymentKitAccountRangeBrandInfo *)brandInfo country:(NSString * _Nullable)country __attribute__((swift_name("doCopy(binRange:panLength:brandInfo:country:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitBinRange *binRange __attribute__((swift_name("binRange")));
@property (readonly) PaymentKitCardBrand *brand __attribute__((swift_name("brand")));
@property (readonly) PaymentKitAccountRangeBrandInfo *brandInfo __attribute__((swift_name("brandInfo")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) int32_t panLength __attribute__((swift_name("panLength")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountRange.BrandInfo")))
@interface PaymentKitAccountRangeBrandInfo : PaymentKitKotlinEnum<PaymentKitAccountRangeBrandInfo *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PaymentKitAccountRangeBrandInfo *visa __attribute__((swift_name("visa")));
@property (class, readonly) PaymentKitAccountRangeBrandInfo *mastercard __attribute__((swift_name("mastercard")));
@property (class, readonly) PaymentKitAccountRangeBrandInfo *mada __attribute__((swift_name("mada")));
@property (class, readonly) PaymentKitAccountRangeBrandInfo *americanexpress __attribute__((swift_name("americanexpress")));
@property (class, readonly) PaymentKitAccountRangeBrandInfo *jcb __attribute__((swift_name("jcb")));
@property (class, readonly) PaymentKitAccountRangeBrandInfo *dinersclub __attribute__((swift_name("dinersclub")));
@property (class, readonly) PaymentKitAccountRangeBrandInfo *discover __attribute__((swift_name("discover")));
@property (class, readonly) PaymentKitAccountRangeBrandInfo *unionpay __attribute__((swift_name("unionpay")));
+ (PaymentKitKotlinArray<PaymentKitAccountRangeBrandInfo *> *)values __attribute__((swift_name("values()")));
@property (readonly) PaymentKitCardBrand *brand __attribute__((swift_name("brand")));
@property (readonly) NSString *brandName __attribute__((swift_name("brandName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address")))
@interface PaymentKitAddress : PaymentKitBase
- (instancetype)initWithCity:(NSString * _Nullable)city country:(NSString * _Nullable)country line1:(NSString * _Nullable)line1 line2:(NSString * _Nullable)line2 postalCode:(NSString * _Nullable)postalCode state:(NSString * _Nullable)state __attribute__((swift_name("init(city:country:line1:line2:postalCode:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitAddressCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitAddress *)doCopyCity:(NSString * _Nullable)city country:(NSString * _Nullable)country line1:(NSString * _Nullable)line1 line2:(NSString * _Nullable)line2 postalCode:(NSString * _Nullable)postalCode state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(city:country:line1:line2:postalCode:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (PaymentKitCountryCode * _Nullable)getCountryCode __attribute__((swift_name("getCountryCode()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSDictionary<NSString *, id> *)toParamMap __attribute__((swift_name("toParamMap()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable line1 __attribute__((swift_name("line1")));
@property (readonly) NSString * _Nullable line2 __attribute__((swift_name("line2")));
@property (readonly) NSString * _Nullable postalCode __attribute__((swift_name("postalCode")));
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address.Builder")))
@interface PaymentKitAddressBuilder : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PaymentKitAddress *)build __attribute__((swift_name("build()")));
- (PaymentKitAddressBuilder *)setCityCity:(NSString * _Nullable)city __attribute__((swift_name("setCity(city:)")));
- (PaymentKitAddressBuilder *)setCountryCountry:(NSString * _Nullable)country __attribute__((swift_name("setCountry(country:)")));
- (PaymentKitAddressBuilder *)setCountryCodeCountryCode:(PaymentKitCountryCode * _Nullable)countryCode __attribute__((swift_name("setCountryCode(countryCode:)")));
- (PaymentKitAddressBuilder *)setLine1Line1:(NSString * _Nullable)line1 __attribute__((swift_name("setLine1(line1:)")));
- (PaymentKitAddressBuilder *)setLine2Line2:(NSString * _Nullable)line2 __attribute__((swift_name("setLine2(line2:)")));
- (PaymentKitAddressBuilder *)setPostalCodePostalCode:(NSString * _Nullable)postalCode __attribute__((swift_name("setPostalCode(postalCode:)")));
- (PaymentKitAddressBuilder *)setStateState:(NSString * _Nullable)state __attribute__((swift_name("setState(state:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address.Companion")))
@interface PaymentKitAddressCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitAddressCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BinRange")))
@interface PaymentKitBinRange : PaymentKitBase
- (instancetype)initWithLow:(NSString *)low high:(NSString *)high __attribute__((swift_name("init(low:high:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitBinRange *)doCopyLow:(NSString *)low high:(NSString *)high __attribute__((swift_name("doCopy(low:high:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesCardNumber:(PaymentKitCardNumberUnvalidated *)cardNumber __attribute__((swift_name("matches(cardNumber:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *high __attribute__((swift_name("high")));
@property (readonly) NSString *low __attribute__((swift_name("low")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Card_")))
@interface PaymentKitCard_ : PaymentKitBase

/**
 * @param last4 annotations androidx.annotation.Size(value=4.toLong())
*/
- (instancetype)initWithExpMonth:(PaymentKitInt * _Nullable)expMonth expYear:(PaymentKitInt * _Nullable)expYear name:(NSString * _Nullable)name addressLine1:(NSString * _Nullable)addressLine1 addressLine1Check:(NSString * _Nullable)addressLine1Check addressLine2:(NSString * _Nullable)addressLine2 addressCity:(NSString * _Nullable)addressCity addressState:(NSString * _Nullable)addressState addressZip:(NSString * _Nullable)addressZip addressZipCheck:(NSString * _Nullable)addressZipCheck addressCountry:(NSString * _Nullable)addressCountry last4:(NSString * _Nullable)last4 brand:(PaymentKitCardBrand *)brand fingerprint:(NSString * _Nullable)fingerprint country:(NSString * _Nullable)country currency:(NSString * _Nullable)currency customerId:(NSString * _Nullable)customerId cvcCheck:(NSString * _Nullable)cvcCheck id:(NSString * _Nullable)id __attribute__((swift_name("init(expMonth:expYear:name:addressLine1:addressLine1Check:addressLine2:addressCity:addressState:addressZip:addressZipCheck:addressCountry:last4:brand:fingerprint:country:currency:customerId:cvcCheck:id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitCard_Companion *companion __attribute__((swift_name("companion")));

/**
 * @param last4 annotations androidx.annotation.Size(value=4.toLong())
*/
- (PaymentKitCard_ *)doCopyExpMonth:(PaymentKitInt * _Nullable)expMonth expYear:(PaymentKitInt * _Nullable)expYear name:(NSString * _Nullable)name addressLine1:(NSString * _Nullable)addressLine1 addressLine1Check:(NSString * _Nullable)addressLine1Check addressLine2:(NSString * _Nullable)addressLine2 addressCity:(NSString * _Nullable)addressCity addressState:(NSString * _Nullable)addressState addressZip:(NSString * _Nullable)addressZip addressZipCheck:(NSString * _Nullable)addressZipCheck addressCountry:(NSString * _Nullable)addressCountry last4:(NSString * _Nullable)last4 brand:(PaymentKitCardBrand *)brand fingerprint:(NSString * _Nullable)fingerprint country:(NSString * _Nullable)country currency:(NSString * _Nullable)currency customerId:(NSString * _Nullable)customerId cvcCheck:(NSString * _Nullable)cvcCheck id:(NSString * _Nullable)id __attribute__((swift_name("doCopy(expMonth:expYear:name:addressLine1:addressLine1Check:addressLine2:addressCity:addressState:addressZip:addressZipCheck:addressCountry:last4:brand:fingerprint:country:currency:customerId:cvcCheck:id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable addressCity __attribute__((swift_name("addressCity")));
@property (readonly) NSString * _Nullable addressCountry __attribute__((swift_name("addressCountry")));
@property (readonly) NSString * _Nullable addressLine1 __attribute__((swift_name("addressLine1")));
@property (readonly) NSString * _Nullable addressLine1Check __attribute__((swift_name("addressLine1Check")));
@property (readonly) NSString * _Nullable addressLine2 __attribute__((swift_name("addressLine2")));
@property (readonly) NSString * _Nullable addressState __attribute__((swift_name("addressState")));
@property (readonly) NSString * _Nullable addressZip __attribute__((swift_name("addressZip")));
@property (readonly) NSString * _Nullable addressZipCheck __attribute__((swift_name("addressZipCheck")));
@property (readonly) PaymentKitCardBrand *brand __attribute__((swift_name("brand")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable customerId __attribute__((swift_name("customerId")));
@property (readonly) NSString * _Nullable cvcCheck __attribute__((swift_name("cvcCheck")));
@property (readonly) PaymentKitInt * _Nullable expMonth __attribute__((swift_name("expMonth")));
@property (readonly) PaymentKitInt * _Nullable expYear __attribute__((swift_name("expYear")));
@property (readonly) NSString * _Nullable fingerprint __attribute__((swift_name("fingerprint")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable last4 __attribute__((swift_name("last4")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Card_.Companion")))
@interface PaymentKitCard_Companion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCard_Companion *shared __attribute__((swift_name("shared")));
- (PaymentKitCardBrand *)getCardBrandBrandName:(NSString * _Nullable)brandName __attribute__((swift_name("getCardBrand(brandName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardBrand")))
@interface PaymentKitCardBrand : PaymentKitKotlinEnum<PaymentKitCardBrand *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitCardBrandCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentKitCardBrand *mada __attribute__((swift_name("mada")));
@property (class, readonly) PaymentKitCardBrand *visa __attribute__((swift_name("visa")));
@property (class, readonly) PaymentKitCardBrand *mastercard __attribute__((swift_name("mastercard")));
@property (class, readonly) PaymentKitCardBrand *americanexpress __attribute__((swift_name("americanexpress")));
@property (class, readonly) PaymentKitCardBrand *discover __attribute__((swift_name("discover")));
@property (class, readonly) PaymentKitCardBrand *jcb __attribute__((swift_name("jcb")));
@property (class, readonly) PaymentKitCardBrand *dinersclub __attribute__((swift_name("dinersclub")));
@property (class, readonly) PaymentKitCardBrand *unionpay __attribute__((swift_name("unionpay")));
@property (class, readonly) PaymentKitCardBrand *unknown __attribute__((swift_name("unknown")));
+ (PaymentKitKotlinArray<PaymentKitCardBrand *> *)values __attribute__((swift_name("values()")));
- (int32_t)getMaxLengthForCardNumberCardNumber:(NSString *)cardNumber __attribute__((swift_name("getMaxLengthForCardNumber(cardNumber:)")));
- (BOOL)isMaxCvcCvcText:(NSString * _Nullable)cvcText __attribute__((swift_name("isMaxCvc(cvcText:)")));
- (BOOL)isValidCardNumberLengthCardNumber:(NSString * _Nullable)cardNumber __attribute__((swift_name("isValidCardNumberLength(cardNumber:)")));
- (BOOL)isValidCvcCvc:(NSString *)cvc __attribute__((swift_name("isValidCvc(cvc:)")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSSet<PaymentKitInt *> *cvcLength __attribute__((swift_name("cvcLength")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *iconName __attribute__((swift_name("iconName")));
@property (readonly) int32_t maxCvcLength __attribute__((swift_name("maxCvcLength")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardBrand.Companion")))
@interface PaymentKitCardBrandCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardBrandCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitCardBrand *)fromCardNumberCardNumber:(NSString * _Nullable)cardNumber __attribute__((swift_name("fromCardNumber(cardNumber:)")));
- (PaymentKitCardBrand *)fromCodeCode:(NSString * _Nullable)code __attribute__((swift_name("fromCode(code:)")));
- (NSArray<PaymentKitCardBrand *> *)getCardBrandsCardNumber:(NSString * _Nullable)cardNumber __attribute__((swift_name("getCardBrands(cardNumber:)")));
@property (readonly) NSArray<PaymentKitCardBrand *> *orderedBrands __attribute__((swift_name("orderedBrands")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardUtils")))
@interface PaymentKitCardUtils : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardUtils __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardUtils *shared __attribute__((swift_name("shared")));
- (PaymentKitCardBrand *)getPossibleCardBrandCardNumber:(NSString * _Nullable)cardNumber __attribute__((swift_name("getPossibleCardBrand(cardNumber:)"))) __attribute__((deprecated("CardInputWidget and CardMultilineWidget handle card brand lookup. This method should not be relied on for determining CardBrand.")));
- (BOOL)isValidLuhnNumberCardNumber:(NSString * _Nullable)cardNumber __attribute__((swift_name("isValidLuhnNumber(cardNumber:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CvcCheck")))
@interface PaymentKitCvcCheck : PaymentKitKotlinEnum<PaymentKitCvcCheck *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitCvcCheckCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentKitCvcCheck *pass __attribute__((swift_name("pass")));
@property (class, readonly) PaymentKitCvcCheck *fail __attribute__((swift_name("fail")));
@property (class, readonly) PaymentKitCvcCheck *unavailable __attribute__((swift_name("unavailable")));
@property (class, readonly) PaymentKitCvcCheck *unchecked __attribute__((swift_name("unchecked")));
@property (class, readonly) PaymentKitCvcCheck *unknown __attribute__((swift_name("unknown")));
+ (PaymentKitKotlinArray<PaymentKitCvcCheck *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) BOOL requiresRecollection __attribute__((swift_name("requiresRecollection")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CvcCheck.Companion")))
@interface PaymentKitCvcCheckCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCvcCheckCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitCvcCheck *)fromCodeCode:(NSString * _Nullable)code __attribute__((swift_name("fromCode(code:)")));
@end

__attribute__((swift_name("Step")))
@interface PaymentKitStep : PaymentKitBase
@property (readonly) NSArray<NSString *> *progressRoutes __attribute__((swift_name("progressRoutes")));
@property (readonly) NSArray<NSString *> *successRoutes __attribute__((swift_name("successRoutes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step.Payment")))
@interface PaymentKitStepPayment : PaymentKitStep
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)payment __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitStepPayment *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Step.Verification")))
@interface PaymentKitStepVerification : PaymentKitStep
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)verification __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitStepVerification *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Bin")))
@interface PaymentKitBin : PaymentKitBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitBinCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitBin *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Bin.Companion")))
@interface PaymentKitBinCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitBinCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitBin * _Nullable)createCardNumber:(NSString *)cardNumber __attribute__((swift_name("create(cardNumber:)")));
@end

__attribute__((swift_name("CardNumber")))
@interface PaymentKitCardNumber : PaymentKitBase
@property (class, readonly, getter=companion) PaymentKitCardNumberCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardNumber.Companion")))
@interface PaymentKitCardNumberCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardNumberCompanion *shared __attribute__((swift_name("shared")));
- (NSSet<PaymentKitInt *> *)getSpacePositionsPanLength:(int32_t)panLength __attribute__((swift_name("getSpacePositions(panLength:)")));
@property (readonly) int32_t DEFAULT_PAN_LENGTH __attribute__((swift_name("DEFAULT_PAN_LENGTH")));
@property (readonly) int32_t MAX_PAN_LENGTH __attribute__((swift_name("MAX_PAN_LENGTH")));
@property (readonly) int32_t MIN_PAN_LENGTH __attribute__((swift_name("MIN_PAN_LENGTH")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardNumber.Unvalidated")))
@interface PaymentKitCardNumberUnvalidated : PaymentKitCardNumber
- (instancetype)initWithDenormalized:(NSString *)denormalized __attribute__((swift_name("init(denormalized:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardNumberUnvalidated *)doCopyDenormalized:(NSString *)denormalized __attribute__((swift_name("doCopy(denormalized:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSString *)getFormattedPanLength:(int32_t)panLength __attribute__((swift_name("getFormatted(panLength:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isPartialEntryPanLength:(int32_t)panLength __attribute__((swift_name("isPartialEntry(panLength:)")));
- (BOOL)isPossibleCardBrand __attribute__((swift_name("isPossibleCardBrand()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (PaymentKitCardNumberValidated * _Nullable)validatePanLength:(int32_t)panLength __attribute__((swift_name("validate(panLength:)")));
@property (readonly) PaymentKitBin * _Nullable bin __attribute__((swift_name("bin")));
@property (readonly) BOOL isMaxLength __attribute__((swift_name("isMaxLength")));
@property (readonly) BOOL isValidLuhn __attribute__((swift_name("isValidLuhn")));
@property (readonly) int32_t length __attribute__((swift_name("length")));
@property (readonly) NSString *normalized __attribute__((swift_name("normalized")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardNumber.Validated")))
@interface PaymentKitCardNumberValidated : PaymentKitCardNumber
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardNumberValidated *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressRepository")))
@interface PaymentKitAddressRepository : PaymentKitBase
- (instancetype)initWithResources:(PaymentKitComponents_resourcesResourceReader *)resources __attribute__((swift_name("init(resources:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitAddressRepositoryCompanion *companion __attribute__((swift_name("companion")));
- (void)initializeCountryCode:(NSString *)countryCode schema:(NSString *)schema __attribute__((swift_name("initialize(countryCode:schema:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddressRepository.Companion")))
@interface PaymentKitAddressRepositoryCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitAddressRepositoryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CardAccountRangeRepository")))
@protocol PaymentKitCardAccountRangeRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAccountRangeCardNumber:(PaymentKitCardNumberUnvalidated *)cardNumber completionHandler:(void (^)(PaymentKitAccountRange * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAccountRange(cardNumber:completionHandler:)")));
@property (readonly) id<PaymentKitFlow> loading __attribute__((swift_name("loading")));
@end

__attribute__((swift_name("CardAccountRangeRepositoryFactory")))
@protocol PaymentKitCardAccountRangeRepositoryFactory
@required
- (id<PaymentKitCardAccountRangeRepository>)create __attribute__((swift_name("create()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardAccountRangeService")))
@interface PaymentKitCardAccountRangeService : PaymentKitBase
- (instancetype)initWithCardAccountRangeRepository:(id<PaymentKitCardAccountRangeRepository>)cardAccountRangeRepository workContext:(id<PaymentKitKotlinCoroutineContext>)workContext staticCardAccountRanges:(id<PaymentKitStaticCardAccountRanges>)staticCardAccountRanges accountRangeResultListener:(id<PaymentKitCardAccountRangeServiceAccountRangeResultListener>)accountRangeResultListener __attribute__((swift_name("init(cardAccountRangeRepository:workContext:staticCardAccountRanges:accountRangeResultListener:)"))) __attribute__((objc_designated_initializer));
- (void)cancelAccountRangeRepositoryJob __attribute__((swift_name("cancelAccountRangeRepositoryJob()")));
- (void)onCardNumberChangedCardNumber:(PaymentKitCardNumberUnvalidated *)cardNumber __attribute__((swift_name("onCardNumberChanged(cardNumber:)")));
- (void)queryAccountRangeRepositoryCardNumber:(PaymentKitCardNumberUnvalidated *)cardNumber __attribute__((swift_name("queryAccountRangeRepository(cardNumber:)")));
- (void)updateAccountRangeResultNewAccountRange:(PaymentKitAccountRange * _Nullable)newAccountRange __attribute__((swift_name("updateAccountRangeResult(newAccountRange:)")));
@property (readonly) PaymentKitAccountRange * _Nullable accountRange __attribute__((swift_name("accountRange")));
@property id<PaymentKitJob> _Nullable accountRangeRepositoryJob __attribute__((swift_name("accountRangeRepositoryJob")));
@property (readonly) id<PaymentKitFlow> isLoading __attribute__((swift_name("isLoading")));
@property (readonly) id<PaymentKitStaticCardAccountRanges> staticCardAccountRanges __attribute__((swift_name("staticCardAccountRanges")));
@end

__attribute__((swift_name("CardAccountRangeServiceAccountRangeResultListener")))
@protocol PaymentKitCardAccountRangeServiceAccountRangeResultListener
@required
- (void)onAccountRangeResultNewAccountRange:(PaymentKitAccountRange * _Nullable)newAccountRange __attribute__((swift_name("onAccountRangeResult(newAccountRange:)")));
@end

__attribute__((swift_name("StaticCardAccountRanges")))
@protocol PaymentKitStaticCardAccountRanges
@required
- (NSArray<PaymentKitAccountRange *> *)filterCardNumber:(PaymentKitCardNumberUnvalidated *)cardNumber __attribute__((swift_name("filter(cardNumber:)")));
- (PaymentKitAccountRange * _Nullable)firstCardNumber:(PaymentKitCardNumberUnvalidated *)cardNumber __attribute__((swift_name("first(cardNumber:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultStaticCardAccountRanges")))
@interface PaymentKitDefaultStaticCardAccountRanges : PaymentKitBase <PaymentKitStaticCardAccountRanges>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSArray<PaymentKitAccountRange *> *)filterCardNumber:(PaymentKitCardNumberUnvalidated *)cardNumber __attribute__((swift_name("filter(cardNumber:)")));
- (PaymentKitAccountRange * _Nullable)firstCardNumber:(PaymentKitCardNumberUnvalidated *)cardNumber __attribute__((swift_name("first(cardNumber:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StaticCardAccountRangeSource")))
@interface PaymentKitStaticCardAccountRangeSource : PaymentKitBase
- (instancetype)initWithAccountRanges:(id<PaymentKitStaticCardAccountRanges>)accountRanges __attribute__((swift_name("init(accountRanges:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAccountRangeCardNumber:(PaymentKitCardNumberUnvalidated *)cardNumber completionHandler:(void (^)(PaymentKitAccountRange * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAccountRange(cardNumber:completionHandler:)")));
@property (readonly) id<PaymentKitFlow> loading __attribute__((swift_name("loading")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckIfUserIsRegisteredWithPhoneNumber")))
@interface PaymentKitCheckIfUserIsRegisteredWithPhoneNumber : PaymentKitBase
- (instancetype)initWithUserRepository:(id<PaymentKitUserRepository>)userRepository getTransactionId:(PaymentKitGetTransactionId *)getTransactionId getSessionId:(PaymentKitGetSessionId *)getSessionId __attribute__((swift_name("init(userRepository:getTransactionId:getSessionId:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokePhoneNumber:(NSString *)phoneNumber completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(phoneNumber:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckIfUserIsSignedIn")))
@interface PaymentKitCheckIfUserIsSignedIn : PaymentKitBase
- (instancetype)initWithUserRepository:(id<PaymentKitUserRepository>)userRepository __attribute__((swift_name("init(userRepository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserAuthStateInteractor")))
@interface PaymentKitGetUserAuthStateInteractor : PaymentKitBase
- (instancetype)initWithGetUserByPhoneNumber:(PaymentKitGetUserByPhoneNumber *)getUserByPhoneNumber checkIfUserHasBiometricsRegistered:(PaymentKitCheckIfUserHasBiometricsRegistered *)checkIfUserHasBiometricsRegistered checkIfUserIsSignedIn:(PaymentKitCheckIfUserIsSignedIn *)checkIfUserIsSignedIn savePhoneNumber:(PaymentKitSavePhoneNumber *)savePhoneNumber getPhoneNumber:(PaymentKitGetPhoneNumber *)getPhoneNumber getCards:(PaymentKitGetCards *)getCards __attribute__((swift_name("init(getUserByPhoneNumber:checkIfUserHasBiometricsRegistered:checkIfUserIsSignedIn:savePhoneNumber:getPhoneNumber:getCards:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokePhoneNumber:(NSString * _Nullable)phoneNumber countryCode:(NSString * _Nullable)countryCode completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(phoneNumber:countryCode:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetUserByPhoneNumber")))
@interface PaymentKitGetUserByPhoneNumber : PaymentKitBase
- (instancetype)initWithUserRepository:(id<PaymentKitUserRepository>)userRepository getTransactionId:(PaymentKitGetTransactionId *)getTransactionId getSessionId:(PaymentKitGetSessionId *)getSessionId __attribute__((swift_name("init(userRepository:getTransactionId:getSessionId:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokePhoneNumber:(NSString *)phoneNumber completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(phoneNumber:completionHandler:)")));
@end

__attribute__((swift_name("UserRepository")))
@protocol PaymentKitUserRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentUserWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentUser(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getUserByPhoneNumberPhoneNumber:(NSString *)phoneNumber transactionId:(NSString *)transactionId sessionId:(NSString *)sessionId completionHandler:(void (^)(PaymentKitUserRegistration * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getUserByPhoneNumber(phoneNumber:transactionId:sessionId:completionHandler:)")));
- (id<PaymentKitFlow>)verifyOtpAndSignInPhoneNumber:(NSString *)phoneNumber otp:(NSString *)otp __attribute__((swift_name("verifyOtpAndSignIn(phoneNumber:otp:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyOtp")))
@interface PaymentKitVerifyOtp : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitUserRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));
- (id<PaymentKitFlow>)invokeOtp:(NSString *)otp phoneNumber:(NSString *)phoneNumber __attribute__((swift_name("invoke(otp:phoneNumber:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserDomainDI")))
@interface PaymentKitUserDomainDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userDomainDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitUserDomainDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((swift_name("RegistrationStep")))
@protocol PaymentKitRegistrationStep
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationStepCards")))
@interface PaymentKitRegistrationStepCards : PaymentKitBase <PaymentKitRegistrationStep>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cards __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitRegistrationStepCards *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegistrationStepNothing")))
@interface PaymentKitRegistrationStepNothing : PaymentKitBase <PaymentKitRegistrationStep>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nothing __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitRegistrationStepNothing *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface PaymentKitUser : PaymentKitBase
- (instancetype)initWithAddresses:(NSArray<PaymentKitUserAddress *> *)addresses cards:(NSArray<PaymentKitUserCard *> *)cards checkout:(PaymentKitUserCheckout *)checkout clientAddresses:(NSArray<PaymentKitUserClientAddress *> *)clientAddresses countryCode:(NSString *)countryCode createdAt:(NSString *)createdAt email:(NSString * _Nullable)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName lastUsedAddress:(NSString * _Nullable)lastUsedAddress lastUsedCardProd:(NSString * _Nullable)lastUsedCardProd lastUsedCardSandbox:(NSString * _Nullable)lastUsedCardSandbox phoneNumber:(NSString *)phoneNumber waitingTransaction:(NSString * _Nullable)waitingTransaction __attribute__((swift_name("init(addresses:cards:checkout:clientAddresses:countryCode:createdAt:email:firstName:id:lastName:lastUsedAddress:lastUsedCardProd:lastUsedCardSandbox:phoneNumber:waitingTransaction:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUser *)doCopyAddresses:(NSArray<PaymentKitUserAddress *> *)addresses cards:(NSArray<PaymentKitUserCard *> *)cards checkout:(PaymentKitUserCheckout *)checkout clientAddresses:(NSArray<PaymentKitUserClientAddress *> *)clientAddresses countryCode:(NSString *)countryCode createdAt:(NSString *)createdAt email:(NSString * _Nullable)email firstName:(NSString *)firstName id:(NSString *)id lastName:(NSString *)lastName lastUsedAddress:(NSString * _Nullable)lastUsedAddress lastUsedCardProd:(NSString * _Nullable)lastUsedCardProd lastUsedCardSandbox:(NSString * _Nullable)lastUsedCardSandbox phoneNumber:(NSString *)phoneNumber waitingTransaction:(NSString * _Nullable)waitingTransaction __attribute__((swift_name("doCopy(addresses:cards:checkout:clientAddresses:countryCode:createdAt:email:firstName:id:lastName:lastUsedAddress:lastUsedCardProd:lastUsedCardSandbox:phoneNumber:waitingTransaction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PaymentKitUserAddress *> *addresses __attribute__((swift_name("addresses")));
@property (readonly) NSArray<PaymentKitUserCard *> *cards __attribute__((swift_name("cards")));
@property (readonly) PaymentKitUserCheckout *checkout __attribute__((swift_name("checkout")));
@property (readonly) NSArray<PaymentKitUserClientAddress *> *clientAddresses __attribute__((swift_name("clientAddresses")));
@property (readonly) NSString *countryCode __attribute__((swift_name("countryCode")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *lastName __attribute__((swift_name("lastName")));
@property (readonly) NSString * _Nullable lastUsedAddress __attribute__((swift_name("lastUsedAddress")));
@property (readonly) NSString * _Nullable lastUsedCardProd __attribute__((swift_name("lastUsedCardProd")));
@property (readonly) NSString * _Nullable lastUsedCardSandbox __attribute__((swift_name("lastUsedCardSandbox")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) NSString * _Nullable waitingTransaction __attribute__((swift_name("waitingTransaction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Address")))
@interface PaymentKitUserAddress : PaymentKitBase
- (instancetype)initWithCity:(NSString *)city country:(NSString *)country id:(NSString *)id postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("init(city:country:id:postcode:state:street1:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserAddress *)doCopyCity:(NSString *)city country:(NSString *)country id:(NSString *)id postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("doCopy(city:country:id:postcode:state:street1:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *postcode __attribute__((swift_name("postcode")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) NSString *street1 __attribute__((swift_name("street1")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Card")))
@interface PaymentKitUserCard : PaymentKitBase
- (instancetype)initWithBillingDetails:(PaymentKitUserCardBillingDetails *)billingDetails bin:(NSString *)bin binCountry:(NSString * _Nullable)binCountry createdAt:(NSString *)createdAt deleted:(NSString * _Nullable)deleted deletedByCascade:(BOOL)deletedByCascade details:(PaymentKitUserCardDetails *)details expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear holder:(NSString *)holder id:(NSString *)id last4Digits:(NSString *)last4Digits madaAgreementId:(NSString * _Nullable)madaAgreementId paymentBrand:(NSString *)paymentBrand type:(NSString *)type __attribute__((swift_name("init(billingDetails:bin:binCountry:createdAt:deleted:deletedByCascade:details:expiryMonth:expiryYear:holder:id:last4Digits:madaAgreementId:paymentBrand:type:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserCard *)doCopyBillingDetails:(PaymentKitUserCardBillingDetails *)billingDetails bin:(NSString *)bin binCountry:(NSString * _Nullable)binCountry createdAt:(NSString *)createdAt deleted:(NSString * _Nullable)deleted deletedByCascade:(BOOL)deletedByCascade details:(PaymentKitUserCardDetails *)details expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear holder:(NSString *)holder id:(NSString *)id last4Digits:(NSString *)last4Digits madaAgreementId:(NSString * _Nullable)madaAgreementId paymentBrand:(NSString *)paymentBrand type:(NSString *)type __attribute__((swift_name("doCopy(billingDetails:bin:binCountry:createdAt:deleted:deletedByCascade:details:expiryMonth:expiryYear:holder:id:last4Digits:madaAgreementId:paymentBrand:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitUserCardBillingDetails *billingDetails __attribute__((swift_name("billingDetails")));
@property (readonly) NSString *bin __attribute__((swift_name("bin")));
@property (readonly) NSString * _Nullable binCountry __attribute__((swift_name("binCountry")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable deleted __attribute__((swift_name("deleted")));
@property (readonly) BOOL deletedByCascade __attribute__((swift_name("deletedByCascade")));
@property (readonly) PaymentKitUserCardDetails *details __attribute__((swift_name("details")));
@property (readonly) NSString *expiryMonth __attribute__((swift_name("expiryMonth")));
@property (readonly) NSString *expiryYear __attribute__((swift_name("expiryYear")));
@property (readonly) NSString *holder __attribute__((swift_name("holder")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *last4Digits __attribute__((swift_name("last4Digits")));
@property (readonly) NSString * _Nullable madaAgreementId __attribute__((swift_name("madaAgreementId")));
@property (readonly) NSString *paymentBrand __attribute__((swift_name("paymentBrand")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.CardBillingDetails")))
@interface PaymentKitUserCardBillingDetails : PaymentKitBase
- (instancetype)initWithCity:(NSString *)city country:(NSString *)country postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("init(city:country:postcode:state:street1:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserCardBillingDetails *)doCopyCity:(NSString *)city country:(NSString *)country postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("doCopy(city:country:postcode:state:street1:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *postcode __attribute__((swift_name("postcode")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) NSString *street1 __attribute__((swift_name("street1")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.CardDetails")))
@interface PaymentKitUserCardDetails : PaymentKitBase
- (instancetype)initWithBin:(NSString *)bin binCountry:(NSString * _Nullable)binCountry binType:(NSString *)binType country:(NSString *)country expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear holder:(NSString *)holder last4Digits:(NSString *)last4Digits level:(NSString *)level maxPanLength:(NSString *)maxPanLength regulatedFlag:(NSString *)regulatedFlag type:(NSString *)type __attribute__((swift_name("init(bin:binCountry:binType:country:expiryMonth:expiryYear:holder:last4Digits:level:maxPanLength:regulatedFlag:type:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserCardDetails *)doCopyBin:(NSString *)bin binCountry:(NSString * _Nullable)binCountry binType:(NSString *)binType country:(NSString *)country expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear holder:(NSString *)holder last4Digits:(NSString *)last4Digits level:(NSString *)level maxPanLength:(NSString *)maxPanLength regulatedFlag:(NSString *)regulatedFlag type:(NSString *)type __attribute__((swift_name("doCopy(bin:binCountry:binType:country:expiryMonth:expiryYear:holder:last4Digits:level:maxPanLength:regulatedFlag:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bin __attribute__((swift_name("bin")));
@property (readonly) NSString * _Nullable binCountry __attribute__((swift_name("binCountry")));
@property (readonly) NSString *binType __attribute__((swift_name("binType")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *expiryMonth __attribute__((swift_name("expiryMonth")));
@property (readonly) NSString *expiryYear __attribute__((swift_name("expiryYear")));
@property (readonly) NSString *holder __attribute__((swift_name("holder")));
@property (readonly) NSString *last4Digits __attribute__((swift_name("last4Digits")));
@property (readonly) NSString *level __attribute__((swift_name("level")));
@property (readonly) NSString *maxPanLength __attribute__((swift_name("maxPanLength")));
@property (readonly) NSString *regulatedFlag __attribute__((swift_name("regulatedFlag")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Checkout")))
@interface PaymentKitUserCheckout : PaymentKitBase
- (instancetype)initWithAmount:(double)amount id:(NSString *)id payTo:(NSString *)payTo __attribute__((swift_name("init(amount:id:payTo:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserCheckout *)doCopyAmount:(double)amount id:(NSString *)id payTo:(NSString *)payTo __attribute__((swift_name("doCopy(amount:id:payTo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *payTo __attribute__((swift_name("payTo")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.ClientAddress")))
@interface PaymentKitUserClientAddress : PaymentKitBase
- (instancetype)initWithCity:(NSString *)city country:(NSString *)country id:(NSString *)id postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("init(city:country:id:postcode:state:street1:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserClientAddress *)doCopyCity:(NSString *)city country:(NSString *)country id:(NSString *)id postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("doCopy(city:country:id:postcode:state:street1:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *postcode __attribute__((swift_name("postcode")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) NSString *street1 __attribute__((swift_name("street1")));
@end

__attribute__((swift_name("UserAuthState")))
@protocol PaymentKitUserAuthState
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAuthStateEmpty")))
@interface PaymentKitUserAuthStateEmpty : PaymentKitBase <PaymentKitUserAuthState>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)empty __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitUserAuthStateEmpty *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAuthStateRequiresBiometricAuth")))
@interface PaymentKitUserAuthStateRequiresBiometricAuth : PaymentKitBase <PaymentKitUserAuthState>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requiresBiometricAuth __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitUserAuthStateRequiresBiometricAuth *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAuthStateRequiresOtpAndBiometricRegistration")))
@interface PaymentKitUserAuthStateRequiresOtpAndBiometricRegistration : PaymentKitBase <PaymentKitUserAuthState>
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("init(phoneNumber:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserAuthStateRequiresOtpAndBiometricRegistration *)doCopyPhoneNumber:(NSString *)phoneNumber __attribute__((swift_name("doCopy(phoneNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAuthStateRequiresPaymentMethod")))
@interface PaymentKitUserAuthStateRequiresPaymentMethod : PaymentKitBase <PaymentKitUserAuthState>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requiresPaymentMethod __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitUserAuthStateRequiresPaymentMethod *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserAuthStateRequiresPhoneNumber")))
@interface PaymentKitUserAuthStateRequiresPhoneNumber : PaymentKitBase <PaymentKitUserAuthState>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)requiresPhoneNumber __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitUserAuthStateRequiresPhoneNumber *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRegistration")))
@interface PaymentKitUserRegistration : PaymentKitBase
- (instancetype)initWithAmount:(NSString *)amount amwalFee:(NSString * _Nullable)amwalFee amwalTaxVay:(NSString * _Nullable)amwalTaxVay appNotified:(BOOL)appNotified approvalType:(NSString * _Nullable)approvalType brandPercentage:(NSString * _Nullable)brandPercentage brandStaticFee:(NSString * _Nullable)brandStaticFee cardLast4Digits:(NSString *)cardLast4Digits cardPaymentBrand:(NSString *)cardPaymentBrand clientEmail:(NSString * _Nullable)clientEmail clientFirstName:(NSString * _Nullable)clientFirstName clientLastName:(NSString * _Nullable)clientLastName clientPhoneNumber:(NSString *)clientPhoneNumber isRegistered:(BOOL)isRegistered createdAt:(NSString *)createdAt discount:(NSString *)discount hasNewRegistration:(BOOL)hasNewRegistration id:(NSString *)id isApprovedByClient:(NSString * _Nullable)isApprovedByClient isRefundable:(BOOL)isRefundable merchantBusinessName:(NSString *)merchantBusinessName merchantCountryCode:(NSString *)merchantCountryCode merchantPayout:(NSString * _Nullable)merchantPayout orderDetails:(NSString * _Nullable)orderDetails paymentBrand:(NSString * _Nullable)paymentBrand refId:(NSString * _Nullable)refId shipping:(NSString *)shipping shippingDetails:(NSString * _Nullable)shippingDetails status:(NSString * _Nullable)status storeDomain:(NSString * _Nullable)storeDomain storeLogo:(NSString * _Nullable)storeLogo taxes:(NSString *)taxes totalAmount:(NSString *)totalAmount transactionStatus:(PaymentKitUserRegistrationTransactionStatus * _Nullable)transactionStatus type:(NSString *)type webauth:(PaymentKitUserRegistrationWebauth *)webauth __attribute__((swift_name("init(amount:amwalFee:amwalTaxVay:appNotified:approvalType:brandPercentage:brandStaticFee:cardLast4Digits:cardPaymentBrand:clientEmail:clientFirstName:clientLastName:clientPhoneNumber:isRegistered:createdAt:discount:hasNewRegistration:id:isApprovedByClient:isRefundable:merchantBusinessName:merchantCountryCode:merchantPayout:orderDetails:paymentBrand:refId:shipping:shippingDetails:status:storeDomain:storeLogo:taxes:totalAmount:transactionStatus:type:webauth:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserRegistration *)doCopyAmount:(NSString *)amount amwalFee:(NSString * _Nullable)amwalFee amwalTaxVay:(NSString * _Nullable)amwalTaxVay appNotified:(BOOL)appNotified approvalType:(NSString * _Nullable)approvalType brandPercentage:(NSString * _Nullable)brandPercentage brandStaticFee:(NSString * _Nullable)brandStaticFee cardLast4Digits:(NSString *)cardLast4Digits cardPaymentBrand:(NSString *)cardPaymentBrand clientEmail:(NSString * _Nullable)clientEmail clientFirstName:(NSString * _Nullable)clientFirstName clientLastName:(NSString * _Nullable)clientLastName clientPhoneNumber:(NSString *)clientPhoneNumber isRegistered:(BOOL)isRegistered createdAt:(NSString *)createdAt discount:(NSString *)discount hasNewRegistration:(BOOL)hasNewRegistration id:(NSString *)id isApprovedByClient:(NSString * _Nullable)isApprovedByClient isRefundable:(BOOL)isRefundable merchantBusinessName:(NSString *)merchantBusinessName merchantCountryCode:(NSString *)merchantCountryCode merchantPayout:(NSString * _Nullable)merchantPayout orderDetails:(NSString * _Nullable)orderDetails paymentBrand:(NSString * _Nullable)paymentBrand refId:(NSString * _Nullable)refId shipping:(NSString *)shipping shippingDetails:(NSString * _Nullable)shippingDetails status:(NSString * _Nullable)status storeDomain:(NSString * _Nullable)storeDomain storeLogo:(NSString * _Nullable)storeLogo taxes:(NSString *)taxes totalAmount:(NSString *)totalAmount transactionStatus:(PaymentKitUserRegistrationTransactionStatus * _Nullable)transactionStatus type:(NSString *)type webauth:(PaymentKitUserRegistrationWebauth *)webauth __attribute__((swift_name("doCopy(amount:amwalFee:amwalTaxVay:appNotified:approvalType:brandPercentage:brandStaticFee:cardLast4Digits:cardPaymentBrand:clientEmail:clientFirstName:clientLastName:clientPhoneNumber:isRegistered:createdAt:discount:hasNewRegistration:id:isApprovedByClient:isRefundable:merchantBusinessName:merchantCountryCode:merchantPayout:orderDetails:paymentBrand:refId:shipping:shippingDetails:status:storeDomain:storeLogo:taxes:totalAmount:transactionStatus:type:webauth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable amwalFee __attribute__((swift_name("amwalFee")));
@property (readonly) NSString * _Nullable amwalTaxVay __attribute__((swift_name("amwalTaxVay")));
@property (readonly) BOOL appNotified __attribute__((swift_name("appNotified")));
@property (readonly) NSString * _Nullable approvalType __attribute__((swift_name("approvalType")));
@property (readonly) NSString * _Nullable brandPercentage __attribute__((swift_name("brandPercentage")));
@property (readonly) NSString * _Nullable brandStaticFee __attribute__((swift_name("brandStaticFee")));
@property (readonly) NSString *cardLast4Digits __attribute__((swift_name("cardLast4Digits")));
@property (readonly) NSString *cardPaymentBrand __attribute__((swift_name("cardPaymentBrand")));
@property (readonly) NSString * _Nullable clientEmail __attribute__((swift_name("clientEmail")));
@property (readonly) NSString * _Nullable clientFirstName __attribute__((swift_name("clientFirstName")));
@property (readonly) NSString * _Nullable clientLastName __attribute__((swift_name("clientLastName")));
@property (readonly) NSString *clientPhoneNumber __attribute__((swift_name("clientPhoneNumber")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *discount __attribute__((swift_name("discount")));
@property (readonly) BOOL hasNewRegistration __attribute__((swift_name("hasNewRegistration")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isApprovedByClient __attribute__((swift_name("isApprovedByClient")));
@property (readonly) BOOL isRefundable __attribute__((swift_name("isRefundable")));
@property (readonly) BOOL isRegistered __attribute__((swift_name("isRegistered")));
@property (readonly) NSString *merchantBusinessName __attribute__((swift_name("merchantBusinessName")));
@property (readonly) NSString *merchantCountryCode __attribute__((swift_name("merchantCountryCode")));
@property (readonly) NSString * _Nullable merchantPayout __attribute__((swift_name("merchantPayout")));
@property (readonly) NSString * _Nullable orderDetails __attribute__((swift_name("orderDetails")));
@property (readonly) NSString * _Nullable paymentBrand __attribute__((swift_name("paymentBrand")));
@property (readonly) NSString * _Nullable refId __attribute__((swift_name("refId")));
@property (readonly) NSString *shipping __attribute__((swift_name("shipping")));
@property (readonly) NSString * _Nullable shippingDetails __attribute__((swift_name("shippingDetails")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable storeDomain __attribute__((swift_name("storeDomain")));
@property (readonly) NSString * _Nullable storeLogo __attribute__((swift_name("storeLogo")));
@property (readonly) NSString *taxes __attribute__((swift_name("taxes")));
@property (readonly) NSString *totalAmount __attribute__((swift_name("totalAmount")));
@property (readonly) PaymentKitUserRegistrationTransactionStatus * _Nullable transactionStatus __attribute__((swift_name("transactionStatus")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@property (readonly) PaymentKitUserRegistrationWebauth *webauth __attribute__((swift_name("webauth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRegistration.TransactionStatus")))
@interface PaymentKitUserRegistrationTransactionStatus : PaymentKitBase
- (instancetype)initWithCode:(NSString * _Nullable)code description:(NSString * _Nullable)description __attribute__((swift_name("init(code:description:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserRegistrationTransactionStatus *)doCopyCode:(NSString * _Nullable)code description:(NSString * _Nullable)description __attribute__((swift_name("doCopy(code:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRegistration.Webauth")))
@interface PaymentKitUserRegistrationWebauth : PaymentKitBase
- (instancetype)initWithAllowCredentials:(NSArray<PaymentKitUserRegistrationWebauthAllowCredential *> *)allowCredentials challenge:(NSString *)challenge rpId:(NSString *)rpId timeout:(int32_t)timeout userVerification:(NSString *)userVerification __attribute__((swift_name("init(allowCredentials:challenge:rpId:timeout:userVerification:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserRegistrationWebauth *)doCopyAllowCredentials:(NSArray<PaymentKitUserRegistrationWebauthAllowCredential *> *)allowCredentials challenge:(NSString *)challenge rpId:(NSString *)rpId timeout:(int32_t)timeout userVerification:(NSString *)userVerification __attribute__((swift_name("doCopy(allowCredentials:challenge:rpId:timeout:userVerification:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PaymentKitUserRegistrationWebauthAllowCredential *> *allowCredentials __attribute__((swift_name("allowCredentials")));
@property (readonly) NSString *challenge __attribute__((swift_name("challenge")));
@property (readonly) NSString *rpId __attribute__((swift_name("rpId")));
@property (readonly) int32_t timeout __attribute__((swift_name("timeout")));
@property (readonly) NSString *userVerification __attribute__((swift_name("userVerification")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserRegistration.WebauthAllowCredential")))
@interface PaymentKitUserRegistrationWebauthAllowCredential : PaymentKitBase
- (instancetype)initWithDevice:(NSString * _Nullable)device id:(NSString *)id os:(NSString *)os transports:(NSArray<NSString *> *)transports type:(NSString *)type __attribute__((swift_name("init(device:id:os:transports:type:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitUserRegistrationWebauthAllowCredential *)doCopyDevice:(NSString * _Nullable)device id:(NSString *)id os:(NSString *)os transports:(NSArray<NSString *> *)transports type:(NSString *)type __attribute__((swift_name("doCopy(device:id:os:transports:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable device __attribute__((swift_name("device")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *os __attribute__((swift_name("os")));
@property (readonly) NSArray<NSString *> *transports __attribute__((swift_name("transports")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WebauthnDomainDI")))
@interface PaymentKitWebauthnDomainDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)webauthnDomainDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitWebauthnDomainDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CheckIfUserHasBiometricsRegistered")))
@interface PaymentKitCheckIfUserHasBiometricsRegistered : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitWebauthnRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(PaymentKitBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyUserBiometrics")))
@interface PaymentKitVerifyUserBiometrics : PaymentKitBase
- (instancetype)initWithWebauthnRepository:(id<PaymentKitWebauthnRepository>)webauthnRepository isTransactionSucceeded:(PaymentKitIsTransactionSucceeded *)isTransactionSucceeded userHasBiometricsRegistered:(PaymentKitCheckIfUserHasBiometricsRegistered *)userHasBiometricsRegistered saveTransaction:(PaymentKitSaveTransaction *)saveTransaction __attribute__((swift_name("init(webauthnRepository:isTransactionSucceeded:userHasBiometricsRegistered:saveTransaction:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("CardsRepository")))
@protocol PaymentKitCardsRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addCardCardInfo:(PaymentKitAddCard *)cardInfo completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addCard(cardInfo:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)chooseCardChooseCard:(PaymentKitChooseCard *)chooseCard completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("chooseCard(chooseCard:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)confirmCardPaymentCardId:(NSString *)cardId browserWidth:(NSString *)browserWidth browserHeight:(NSString *)browserHeight completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("confirmCardPayment(cardId:browserWidth:browserHeight:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCardsWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCards(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddCardUseCase")))
@interface PaymentKitAddCardUseCase : PaymentKitBase
- (instancetype)initWithCardsRepository:(id<PaymentKitCardsRepository>)cardsRepository __attribute__((swift_name("init(cardsRepository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeCardInfo:(PaymentKitAddCard *)cardInfo completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(cardInfo:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConfirmPaymentUseCase")))
@interface PaymentKitConfirmPaymentUseCase : PaymentKitBase
- (instancetype)initWithCardsRepository:(id<PaymentKitCardsRepository>)cardsRepository __attribute__((swift_name("init(cardsRepository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeCardId:(NSString *)cardId browserWidth:(NSString *)browserWidth browserHeight:(NSString *)browserHeight completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(cardId:browserWidth:browserHeight:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DetectSuccessStepFromUrl")))
@interface PaymentKitDetectSuccessStepFromUrl : PaymentKitBase
- (instancetype)initWithGetTransactionId:(PaymentKitGetTransactionId *)getTransactionId saveTransaction:(PaymentKitSaveTransaction *)saveTransaction __attribute__((swift_name("init(getTransactionId:saveTransaction:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeUrl:(NSString *)url isNewCard:(BOOL)isNewCard completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(url:isNewCard:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetCards")))
@interface PaymentKitGetCards : PaymentKitBase
- (instancetype)initWithCardsRepository:(id<PaymentKitCardsRepository>)cardsRepository __attribute__((swift_name("init(cardsRepository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardsDomainDI")))
@interface PaymentKitCardsDomainDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cardsDomainDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCardsDomainDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddCard")))
@interface PaymentKitAddCard : PaymentKitBase
- (instancetype)initWithBrand:(NSString *)brand cvv:(NSString *)cvv holderName:(NSString *)holderName billingStreet:(NSString *)billingStreet billingStreet2:(NSString * _Nullable)billingStreet2 billingCity:(NSString *)billingCity billingState:(NSString *)billingState billingPostcode:(NSString *)billingPostcode billingCountry:(NSString *)billingCountry createRegistration:(BOOL)createRegistration cardNumber:(NSString *)cardNumber cardExpiryMonth:(NSString *)cardExpiryMonth cardExpiryYear:(NSString *)cardExpiryYear browserLanguage:(NSString *)browserLanguage browserScreenHeight:(NSString *)browserScreenHeight browserScreenWidth:(NSString *)browserScreenWidth browserTimezone:(NSString *)browserTimezone browserScreenColorDepth:(NSString *)browserScreenColorDepth browserChallengeWindow:(NSString *)browserChallengeWindow __attribute__((swift_name("init(brand:cvv:holderName:billingStreet:billingStreet2:billingCity:billingState:billingPostcode:billingCountry:createRegistration:cardNumber:cardExpiryMonth:cardExpiryYear:browserLanguage:browserScreenHeight:browserScreenWidth:browserTimezone:browserScreenColorDepth:browserChallengeWindow:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddCard *)doCopyBrand:(NSString *)brand cvv:(NSString *)cvv holderName:(NSString *)holderName billingStreet:(NSString *)billingStreet billingStreet2:(NSString * _Nullable)billingStreet2 billingCity:(NSString *)billingCity billingState:(NSString *)billingState billingPostcode:(NSString *)billingPostcode billingCountry:(NSString *)billingCountry createRegistration:(BOOL)createRegistration cardNumber:(NSString *)cardNumber cardExpiryMonth:(NSString *)cardExpiryMonth cardExpiryYear:(NSString *)cardExpiryYear browserLanguage:(NSString *)browserLanguage browserScreenHeight:(NSString *)browserScreenHeight browserScreenWidth:(NSString *)browserScreenWidth browserTimezone:(NSString *)browserTimezone browserScreenColorDepth:(NSString *)browserScreenColorDepth browserChallengeWindow:(NSString *)browserChallengeWindow __attribute__((swift_name("doCopy(brand:cvv:holderName:billingStreet:billingStreet2:billingCity:billingState:billingPostcode:billingCountry:createRegistration:cardNumber:cardExpiryMonth:cardExpiryYear:browserLanguage:browserScreenHeight:browserScreenWidth:browserTimezone:browserScreenColorDepth:browserChallengeWindow:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *billingCity __attribute__((swift_name("billingCity")));
@property (readonly) NSString *billingCountry __attribute__((swift_name("billingCountry")));
@property (readonly) NSString *billingPostcode __attribute__((swift_name("billingPostcode")));
@property (readonly) NSString *billingState __attribute__((swift_name("billingState")));
@property (readonly) NSString *billingStreet __attribute__((swift_name("billingStreet")));
@property (readonly) NSString * _Nullable billingStreet2 __attribute__((swift_name("billingStreet2")));
@property (readonly) NSString *brand __attribute__((swift_name("brand")));
@property (readonly) NSString *browserChallengeWindow __attribute__((swift_name("browserChallengeWindow")));
@property (readonly) NSString *browserLanguage __attribute__((swift_name("browserLanguage")));
@property (readonly) NSString *browserScreenColorDepth __attribute__((swift_name("browserScreenColorDepth")));
@property (readonly) NSString *browserScreenHeight __attribute__((swift_name("browserScreenHeight")));
@property (readonly) NSString *browserScreenWidth __attribute__((swift_name("browserScreenWidth")));
@property (readonly) NSString *browserTimezone __attribute__((swift_name("browserTimezone")));
@property (readonly) NSString *cardExpiryMonth __attribute__((swift_name("cardExpiryMonth")));
@property (readonly) NSString *cardExpiryYear __attribute__((swift_name("cardExpiryYear")));
@property (readonly) NSString *cardNumber __attribute__((swift_name("cardNumber")));
@property (readonly) BOOL createRegistration __attribute__((swift_name("createRegistration")));
@property (readonly) NSString *cvv __attribute__((swift_name("cvv")));
@property (readonly) NSString *holderName __attribute__((swift_name("holderName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult")))
@interface PaymentKitAddedCardResult : PaymentKitBase
- (instancetype)initWithUrl:(NSString *)url amount:(NSString *)amount billing:(PaymentKitAddedCardResultBilling *)billing buildNumber:(NSString *)buildNumber card:(PaymentKitAddedCardResultCard *)card currency:(NSString *)currency customParameters:(PaymentKitAddedCardResultCustomParameters *)customParameters customer:(PaymentKitAddedCardResultCustomer *)customer descriptor:(NSString *)descriptor id:(NSString *)id merchantTransactionId:(NSString *)merchantTransactionId ndc:(NSString *)ndc paymentBrand:(NSString *)paymentBrand paymentType:(NSString *)paymentType redirect:(PaymentKitAddedCardResultRedirect *)redirect registrationId:(NSString *)registrationId result:(PaymentKitAddedCardResultResult *)result resultDetails:(PaymentKitAddedCardResultResultDetails *)resultDetails risk:(PaymentKitAddedCardResultRisk *)risk timestamp:(NSString *)timestamp __attribute__((swift_name("init(url:amount:billing:buildNumber:card:currency:customParameters:customer:descriptor:id:merchantTransactionId:ndc:paymentBrand:paymentType:redirect:registrationId:result:resultDetails:risk:timestamp:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResult *)doCopyUrl:(NSString *)url amount:(NSString *)amount billing:(PaymentKitAddedCardResultBilling *)billing buildNumber:(NSString *)buildNumber card:(PaymentKitAddedCardResultCard *)card currency:(NSString *)currency customParameters:(PaymentKitAddedCardResultCustomParameters *)customParameters customer:(PaymentKitAddedCardResultCustomer *)customer descriptor:(NSString *)descriptor id:(NSString *)id merchantTransactionId:(NSString *)merchantTransactionId ndc:(NSString *)ndc paymentBrand:(NSString *)paymentBrand paymentType:(NSString *)paymentType redirect:(PaymentKitAddedCardResultRedirect *)redirect registrationId:(NSString *)registrationId result:(PaymentKitAddedCardResultResult *)result resultDetails:(PaymentKitAddedCardResultResultDetails *)resultDetails risk:(PaymentKitAddedCardResultRisk *)risk timestamp:(NSString *)timestamp __attribute__((swift_name("doCopy(url:amount:billing:buildNumber:card:currency:customParameters:customer:descriptor:id:merchantTransactionId:ndc:paymentBrand:paymentType:redirect:registrationId:result:resultDetails:risk:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) PaymentKitAddedCardResultBilling *billing __attribute__((swift_name("billing")));
@property (readonly) NSString *buildNumber __attribute__((swift_name("buildNumber")));
@property (readonly) PaymentKitAddedCardResultCard *card __attribute__((swift_name("card")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) PaymentKitAddedCardResultCustomParameters *customParameters __attribute__((swift_name("customParameters")));
@property (readonly) PaymentKitAddedCardResultCustomer *customer __attribute__((swift_name("customer")));
@property (readonly) NSString *descriptor __attribute__((swift_name("descriptor")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *merchantTransactionId __attribute__((swift_name("merchantTransactionId")));
@property (readonly) NSString *ndc __attribute__((swift_name("ndc")));
@property (readonly) NSString *paymentBrand __attribute__((swift_name("paymentBrand")));
@property (readonly) NSString *paymentType __attribute__((swift_name("paymentType")));
@property (readonly) PaymentKitAddedCardResultRedirect *redirect __attribute__((swift_name("redirect")));
@property (readonly) NSString *registrationId __attribute__((swift_name("registrationId")));
@property (readonly) PaymentKitAddedCardResultResult *result __attribute__((swift_name("result")));
@property (readonly) PaymentKitAddedCardResultResultDetails *resultDetails __attribute__((swift_name("resultDetails")));
@property (readonly) PaymentKitAddedCardResultRisk *risk __attribute__((swift_name("risk")));
@property (readonly) NSString *timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.Billing")))
@interface PaymentKitAddedCardResultBilling : PaymentKitBase
- (instancetype)initWithCity:(NSString *)city country:(NSString *)country postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("init(city:country:postcode:state:street1:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultBilling *)doCopyCity:(NSString *)city country:(NSString *)country postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("doCopy(city:country:postcode:state:street1:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *postcode __attribute__((swift_name("postcode")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) NSString *street1 __attribute__((swift_name("street1")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.Card")))
@interface PaymentKitAddedCardResultCard : PaymentKitBase
- (instancetype)initWithBin:(NSString *)bin expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear holder:(NSString *)holder last4Digits:(NSString *)last4Digits __attribute__((swift_name("init(bin:expiryMonth:expiryYear:holder:last4Digits:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultCard *)doCopyBin:(NSString *)bin expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear holder:(NSString *)holder last4Digits:(NSString *)last4Digits __attribute__((swift_name("doCopy(bin:expiryMonth:expiryYear:holder:last4Digits:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bin __attribute__((swift_name("bin")));
@property (readonly) NSString *expiryMonth __attribute__((swift_name("expiryMonth")));
@property (readonly) NSString *expiryYear __attribute__((swift_name("expiryYear")));
@property (readonly) NSString *holder __attribute__((swift_name("holder")));
@property (readonly) NSString *last4Digits __attribute__((swift_name("last4Digits")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.CustomParameters")))
@interface PaymentKitAddedCardResultCustomParameters : PaymentKitBase
- (instancetype)initWithOPPCardBin:(NSString *)oPPCardBin __attribute__((swift_name("init(oPPCardBin:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultCustomParameters *)doCopyOPPCardBin:(NSString *)oPPCardBin __attribute__((swift_name("doCopy(oPPCardBin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *oPPCardBin __attribute__((swift_name("oPPCardBin")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.Customer")))
@interface PaymentKitAddedCardResultCustomer : PaymentKitBase
- (instancetype)initWithBrowser:(PaymentKitAddedCardResultCustomerBrowser *)browser email:(NSString *)email givenName:(NSString *)givenName ip:(NSString *)ip mobile:(NSString *)mobile surname:(NSString *)surname __attribute__((swift_name("init(browser:email:givenName:ip:mobile:surname:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultCustomer *)doCopyBrowser:(PaymentKitAddedCardResultCustomerBrowser *)browser email:(NSString *)email givenName:(NSString *)givenName ip:(NSString *)ip mobile:(NSString *)mobile surname:(NSString *)surname __attribute__((swift_name("doCopy(browser:email:givenName:ip:mobile:surname:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitAddedCardResultCustomerBrowser *browser __attribute__((swift_name("browser")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) NSString *givenName __attribute__((swift_name("givenName")));
@property (readonly) NSString *ip __attribute__((swift_name("ip")));
@property (readonly) NSString *mobile __attribute__((swift_name("mobile")));
@property (readonly) NSString *surname __attribute__((swift_name("surname")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.CustomerBrowser")))
@interface PaymentKitAddedCardResultCustomerBrowser : PaymentKitBase
- (instancetype)initWithAcceptHeader:(NSString *)acceptHeader challengeWindow:(NSString *)challengeWindow javaEnabled:(NSString *)javaEnabled javascriptEnabled:(NSString *)javascriptEnabled language:(NSString *)language screenColorDepth:(NSString *)screenColorDepth screenHeight:(NSString *)screenHeight screenWidth:(NSString *)screenWidth timezone:(NSString *)timezone userAgent:(NSString *)userAgent __attribute__((swift_name("init(acceptHeader:challengeWindow:javaEnabled:javascriptEnabled:language:screenColorDepth:screenHeight:screenWidth:timezone:userAgent:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultCustomerBrowser *)doCopyAcceptHeader:(NSString *)acceptHeader challengeWindow:(NSString *)challengeWindow javaEnabled:(NSString *)javaEnabled javascriptEnabled:(NSString *)javascriptEnabled language:(NSString *)language screenColorDepth:(NSString *)screenColorDepth screenHeight:(NSString *)screenHeight screenWidth:(NSString *)screenWidth timezone:(NSString *)timezone userAgent:(NSString *)userAgent __attribute__((swift_name("doCopy(acceptHeader:challengeWindow:javaEnabled:javascriptEnabled:language:screenColorDepth:screenHeight:screenWidth:timezone:userAgent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *acceptHeader __attribute__((swift_name("acceptHeader")));
@property (readonly) NSString *challengeWindow __attribute__((swift_name("challengeWindow")));
@property (readonly) NSString *javaEnabled __attribute__((swift_name("javaEnabled")));
@property (readonly) NSString *javascriptEnabled __attribute__((swift_name("javascriptEnabled")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *screenColorDepth __attribute__((swift_name("screenColorDepth")));
@property (readonly) NSString *screenHeight __attribute__((swift_name("screenHeight")));
@property (readonly) NSString *screenWidth __attribute__((swift_name("screenWidth")));
@property (readonly) NSString *timezone __attribute__((swift_name("timezone")));
@property (readonly) NSString *userAgent __attribute__((swift_name("userAgent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.Redirect")))
@interface PaymentKitAddedCardResultRedirect : PaymentKitBase
- (instancetype)initWithParameters:(NSArray<PaymentKitAddedCardResultRedirectParameter *> *)parameters url:(NSString *)url __attribute__((swift_name("init(parameters:url:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultRedirect *)doCopyParameters:(NSArray<PaymentKitAddedCardResultRedirectParameter *> *)parameters url:(NSString *)url __attribute__((swift_name("doCopy(parameters:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<PaymentKitAddedCardResultRedirectParameter *> *parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.RedirectParameter")))
@interface PaymentKitAddedCardResultRedirectParameter : PaymentKitBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultRedirectParameter *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.Result")))
@interface PaymentKitAddedCardResultResult : PaymentKitBase
- (instancetype)initWithCode:(NSString *)code description:(NSString *)description __attribute__((swift_name("init(code:description:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultResult *)doCopyCode:(NSString *)code description:(NSString *)description __attribute__((swift_name("doCopy(code:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.ResultDetails")))
@interface PaymentKitAddedCardResultResultDetails : PaymentKitBase
- (instancetype)initWithAcquirerResponse:(NSString *)acquirerResponse authCode:(NSString *)authCode clearingInstituteName:(NSString *)clearingInstituteName connectorTxID1:(NSString *)connectorTxID1 connectorTxID2:(NSString *)connectorTxID2 connectorTxID3:(NSString *)connectorTxID3 eXTERNALSYSTEMLINK:(NSString *)eXTERNALSYSTEMLINK extendedDescription:(NSString *)extendedDescription orderID:(NSString *)orderID procStatus:(NSString *)procStatus termID:(NSString *)termID __attribute__((swift_name("init(acquirerResponse:authCode:clearingInstituteName:connectorTxID1:connectorTxID2:connectorTxID3:eXTERNALSYSTEMLINK:extendedDescription:orderID:procStatus:termID:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultResultDetails *)doCopyAcquirerResponse:(NSString *)acquirerResponse authCode:(NSString *)authCode clearingInstituteName:(NSString *)clearingInstituteName connectorTxID1:(NSString *)connectorTxID1 connectorTxID2:(NSString *)connectorTxID2 connectorTxID3:(NSString *)connectorTxID3 eXTERNALSYSTEMLINK:(NSString *)eXTERNALSYSTEMLINK extendedDescription:(NSString *)extendedDescription orderID:(NSString *)orderID procStatus:(NSString *)procStatus termID:(NSString *)termID __attribute__((swift_name("doCopy(acquirerResponse:authCode:clearingInstituteName:connectorTxID1:connectorTxID2:connectorTxID3:eXTERNALSYSTEMLINK:extendedDescription:orderID:procStatus:termID:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *acquirerResponse __attribute__((swift_name("acquirerResponse")));
@property (readonly) NSString *authCode __attribute__((swift_name("authCode")));
@property (readonly) NSString *clearingInstituteName __attribute__((swift_name("clearingInstituteName")));
@property (readonly) NSString *connectorTxID1 __attribute__((swift_name("connectorTxID1")));
@property (readonly) NSString *connectorTxID2 __attribute__((swift_name("connectorTxID2")));
@property (readonly) NSString *connectorTxID3 __attribute__((swift_name("connectorTxID3")));
@property (readonly) NSString *eXTERNALSYSTEMLINK __attribute__((swift_name("eXTERNALSYSTEMLINK")));
@property (readonly) NSString *extendedDescription __attribute__((swift_name("extendedDescription")));
@property (readonly) NSString *orderID __attribute__((swift_name("orderID")));
@property (readonly) NSString *procStatus __attribute__((swift_name("procStatus")));
@property (readonly) NSString *termID __attribute__((swift_name("termID")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddedCardResult.Risk")))
@interface PaymentKitAddedCardResultRisk : PaymentKitBase
- (instancetype)initWithScore:(NSString *)score __attribute__((swift_name("init(score:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitAddedCardResultRisk *)doCopyScore:(NSString *)score __attribute__((swift_name("doCopy(score:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *score __attribute__((swift_name("score")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Card")))
@interface PaymentKitCard : PaymentKitBase
- (instancetype)initWithBillingDetails:(PaymentKitCardBillingDetails *)billingDetails bin:(NSString *)bin binCountry:(NSString * _Nullable)binCountry client:(NSString *)client createdAt:(NSString *)createdAt deleted:(PaymentKitBoolean * _Nullable)deleted deletedByCascade:(BOOL)deletedByCascade details:(PaymentKitCardDetails *)details expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear gateway:(int32_t)gateway holder:(NSString *)holder id:(NSString *)id last4Digits:(NSString *)last4Digits madaAgreementId:(NSString * _Nullable)madaAgreementId paymentBrand:(NSString *)paymentBrand token:(NSString *)token tokenIssuer:(NSString *)tokenIssuer tokenTransactionId:(NSString * _Nullable)tokenTransactionId type:(NSString *)type __attribute__((swift_name("init(billingDetails:bin:binCountry:client:createdAt:deleted:deletedByCascade:details:expiryMonth:expiryYear:gateway:holder:id:last4Digits:madaAgreementId:paymentBrand:token:tokenIssuer:tokenTransactionId:type:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCard *)doCopyBillingDetails:(PaymentKitCardBillingDetails *)billingDetails bin:(NSString *)bin binCountry:(NSString * _Nullable)binCountry client:(NSString *)client createdAt:(NSString *)createdAt deleted:(PaymentKitBoolean * _Nullable)deleted deletedByCascade:(BOOL)deletedByCascade details:(PaymentKitCardDetails *)details expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear gateway:(int32_t)gateway holder:(NSString *)holder id:(NSString *)id last4Digits:(NSString *)last4Digits madaAgreementId:(NSString * _Nullable)madaAgreementId paymentBrand:(NSString *)paymentBrand token:(NSString *)token tokenIssuer:(NSString *)tokenIssuer tokenTransactionId:(NSString * _Nullable)tokenTransactionId type:(NSString *)type __attribute__((swift_name("doCopy(billingDetails:bin:binCountry:client:createdAt:deleted:deletedByCascade:details:expiryMonth:expiryYear:gateway:holder:id:last4Digits:madaAgreementId:paymentBrand:token:tokenIssuer:tokenTransactionId:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitCardBillingDetails *billingDetails __attribute__((swift_name("billingDetails")));
@property (readonly) NSString *bin __attribute__((swift_name("bin")));
@property (readonly) NSString * _Nullable binCountry __attribute__((swift_name("binCountry")));
@property (readonly) NSString *client __attribute__((swift_name("client")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) PaymentKitBoolean * _Nullable deleted __attribute__((swift_name("deleted")));
@property (readonly) BOOL deletedByCascade __attribute__((swift_name("deletedByCascade")));
@property (readonly) PaymentKitCardDetails *details __attribute__((swift_name("details")));
@property (readonly) NSString *expiryMonth __attribute__((swift_name("expiryMonth")));
@property (readonly) NSString *expiryYear __attribute__((swift_name("expiryYear")));
@property (readonly) int32_t gateway __attribute__((swift_name("gateway")));
@property (readonly) NSString *holder __attribute__((swift_name("holder")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *last4Digits __attribute__((swift_name("last4Digits")));
@property (readonly) NSString * _Nullable madaAgreementId __attribute__((swift_name("madaAgreementId")));
@property (readonly) NSString *paymentBrand __attribute__((swift_name("paymentBrand")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@property (readonly) NSString *tokenIssuer __attribute__((swift_name("tokenIssuer")));
@property (readonly) NSString * _Nullable tokenTransactionId __attribute__((swift_name("tokenTransactionId")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Card.BillingDetails")))
@interface PaymentKitCardBillingDetails : PaymentKitBase
- (instancetype)initWithCity:(NSString *)city country:(NSString *)country postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("init(city:country:postcode:state:street1:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardBillingDetails *)doCopyCity:(NSString *)city country:(NSString *)country postcode:(NSString *)postcode state:(NSString *)state street1:(NSString *)street1 __attribute__((swift_name("doCopy(city:country:postcode:state:street1:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *city __attribute__((swift_name("city")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *postcode __attribute__((swift_name("postcode")));
@property (readonly) NSString *state __attribute__((swift_name("state")));
@property (readonly) NSString *street1 __attribute__((swift_name("street1")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Card.Details")))
@interface PaymentKitCardDetails : PaymentKitBase
- (instancetype)initWithBin:(NSString *)bin binCountry:(NSString * _Nullable)binCountry binType:(NSString *)binType country:(NSString *)country expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear holder:(NSString *)holder last4Digits:(NSString *)last4Digits level:(NSString *)level maxPanLength:(NSString *)maxPanLength regulatedFlag:(NSString *)regulatedFlag type:(NSString *)type __attribute__((swift_name("init(bin:binCountry:binType:country:expiryMonth:expiryYear:holder:last4Digits:level:maxPanLength:regulatedFlag:type:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitCardDetails *)doCopyBin:(NSString *)bin binCountry:(NSString * _Nullable)binCountry binType:(NSString *)binType country:(NSString *)country expiryMonth:(NSString *)expiryMonth expiryYear:(NSString *)expiryYear holder:(NSString *)holder last4Digits:(NSString *)last4Digits level:(NSString *)level maxPanLength:(NSString *)maxPanLength regulatedFlag:(NSString *)regulatedFlag type:(NSString *)type __attribute__((swift_name("doCopy(bin:binCountry:binType:country:expiryMonth:expiryYear:holder:last4Digits:level:maxPanLength:regulatedFlag:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bin __attribute__((swift_name("bin")));
@property (readonly) NSString * _Nullable binCountry __attribute__((swift_name("binCountry")));
@property (readonly) NSString *binType __attribute__((swift_name("binType")));
@property (readonly) NSString *country __attribute__((swift_name("country")));
@property (readonly) NSString *expiryMonth __attribute__((swift_name("expiryMonth")));
@property (readonly) NSString *expiryYear __attribute__((swift_name("expiryYear")));
@property (readonly) NSString *holder __attribute__((swift_name("holder")));
@property (readonly) NSString *last4Digits __attribute__((swift_name("last4Digits")));
@property (readonly) NSString *level __attribute__((swift_name("level")));
@property (readonly) NSString *maxPanLength __attribute__((swift_name("maxPanLength")));
@property (readonly) NSString *regulatedFlag __attribute__((swift_name("regulatedFlag")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChooseCard")))
@interface PaymentKitChooseCard : PaymentKitBase
- (instancetype)initWithCardId:(NSString *)cardId browserScreenHeight:(NSString *)browserScreenHeight browserScreenWidth:(NSString *)browserScreenWidth __attribute__((swift_name("init(cardId:browserScreenHeight:browserScreenWidth:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitChooseCard *)doCopyCardId:(NSString *)cardId browserScreenHeight:(NSString *)browserScreenHeight browserScreenWidth:(NSString *)browserScreenWidth __attribute__((swift_name("doCopy(cardId:browserScreenHeight:browserScreenWidth:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *browserScreenHeight __attribute__((swift_name("browserScreenHeight")));
@property (readonly) NSString *browserScreenWidth __attribute__((swift_name("browserScreenWidth")));
@property (readonly) NSString *cardId __attribute__((swift_name("cardId")));
@end

__attribute__((swift_name("TransactionRepository")))
@protocol PaymentKitTransactionRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createTransactionAmount:(double)amount taxes:(double)taxes completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createTransaction(amount:taxes:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSessionIdWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSessionId(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTransactionIdWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTransactionId(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getTransactionInfoWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getTransactionInfo(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveTransactionWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveTransaction(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction")))
@interface PaymentKitTransaction : PaymentKitBase
- (instancetype)initWithAmount:(NSString *)amount amwalFee:(NSString * _Nullable)amwalFee amwalTaxVat:(NSString * _Nullable)amwalTaxVat appNotified:(BOOL)appNotified approvalType:(NSString * _Nullable)approvalType brandPercentage:(NSString * _Nullable)brandPercentage brandStaticFee:(NSString * _Nullable)brandStaticFee cardLast4Digits:(NSString *)cardLast4Digits cardPaymentBrand:(NSString *)cardPaymentBrand clientEmail:(NSString * _Nullable)clientEmail clientFirstName:(NSString * _Nullable)clientFirstName clientLastName:(NSString * _Nullable)clientLastName clientPhoneNumber:(NSString * _Nullable)clientPhoneNumber clientRegistered:(BOOL)clientRegistered createdAt:(NSString *)createdAt discount:(NSString *)discount hasNewRegistration:(BOOL)hasNewRegistration hyperpayCheckoutId:(NSString * _Nullable)hyperpayCheckoutId hypersplitId:(NSString * _Nullable)hypersplitId id:(NSString *)id isApprovedByClient:(NSString * _Nullable)isApprovedByClient isRefundable:(BOOL)isRefundable merchantBusinessName:(NSString *)merchantBusinessName merchantCountryCode:(NSString *)merchantCountryCode merchantPayout:(NSString * _Nullable)merchantPayout orderDetails:(NSString * _Nullable)orderDetails paymentBrand:(NSString * _Nullable)paymentBrand refId:(NSString * _Nullable)refId shipping:(NSString *)shipping shippingDetails:(NSString * _Nullable)shippingDetails status:(NSString * _Nullable)status storeDomain:(NSString * _Nullable)storeDomain storeLogo:(NSString * _Nullable)storeLogo taxes:(NSString *)taxes totalAmount:(NSString *)totalAmount transactionStatus:(PaymentKitTransactionTransactionStatus * _Nullable)transactionStatus type:(NSString *)type __attribute__((swift_name("init(amount:amwalFee:amwalTaxVat:appNotified:approvalType:brandPercentage:brandStaticFee:cardLast4Digits:cardPaymentBrand:clientEmail:clientFirstName:clientLastName:clientPhoneNumber:clientRegistered:createdAt:discount:hasNewRegistration:hyperpayCheckoutId:hypersplitId:id:isApprovedByClient:isRefundable:merchantBusinessName:merchantCountryCode:merchantPayout:orderDetails:paymentBrand:refId:shipping:shippingDetails:status:storeDomain:storeLogo:taxes:totalAmount:transactionStatus:type:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitTransaction *)doCopyAmount:(NSString *)amount amwalFee:(NSString * _Nullable)amwalFee amwalTaxVat:(NSString * _Nullable)amwalTaxVat appNotified:(BOOL)appNotified approvalType:(NSString * _Nullable)approvalType brandPercentage:(NSString * _Nullable)brandPercentage brandStaticFee:(NSString * _Nullable)brandStaticFee cardLast4Digits:(NSString *)cardLast4Digits cardPaymentBrand:(NSString *)cardPaymentBrand clientEmail:(NSString * _Nullable)clientEmail clientFirstName:(NSString * _Nullable)clientFirstName clientLastName:(NSString * _Nullable)clientLastName clientPhoneNumber:(NSString * _Nullable)clientPhoneNumber clientRegistered:(BOOL)clientRegistered createdAt:(NSString *)createdAt discount:(NSString *)discount hasNewRegistration:(BOOL)hasNewRegistration hyperpayCheckoutId:(NSString * _Nullable)hyperpayCheckoutId hypersplitId:(NSString * _Nullable)hypersplitId id:(NSString *)id isApprovedByClient:(NSString * _Nullable)isApprovedByClient isRefundable:(BOOL)isRefundable merchantBusinessName:(NSString *)merchantBusinessName merchantCountryCode:(NSString *)merchantCountryCode merchantPayout:(NSString * _Nullable)merchantPayout orderDetails:(NSString * _Nullable)orderDetails paymentBrand:(NSString * _Nullable)paymentBrand refId:(NSString * _Nullable)refId shipping:(NSString *)shipping shippingDetails:(NSString * _Nullable)shippingDetails status:(NSString * _Nullable)status storeDomain:(NSString * _Nullable)storeDomain storeLogo:(NSString * _Nullable)storeLogo taxes:(NSString *)taxes totalAmount:(NSString *)totalAmount transactionStatus:(PaymentKitTransactionTransactionStatus * _Nullable)transactionStatus type:(NSString *)type __attribute__((swift_name("doCopy(amount:amwalFee:amwalTaxVat:appNotified:approvalType:brandPercentage:brandStaticFee:cardLast4Digits:cardPaymentBrand:clientEmail:clientFirstName:clientLastName:clientPhoneNumber:clientRegistered:createdAt:discount:hasNewRegistration:hyperpayCheckoutId:hypersplitId:id:isApprovedByClient:isRefundable:merchantBusinessName:merchantCountryCode:merchantPayout:orderDetails:paymentBrand:refId:shipping:shippingDetails:status:storeDomain:storeLogo:taxes:totalAmount:transactionStatus:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable amwalFee __attribute__((swift_name("amwalFee")));
@property (readonly) NSString * _Nullable amwalTaxVat __attribute__((swift_name("amwalTaxVat")));
@property (readonly) BOOL appNotified __attribute__((swift_name("appNotified")));
@property (readonly) NSString * _Nullable approvalType __attribute__((swift_name("approvalType")));
@property (readonly) NSString * _Nullable brandPercentage __attribute__((swift_name("brandPercentage")));
@property (readonly) NSString * _Nullable brandStaticFee __attribute__((swift_name("brandStaticFee")));
@property (readonly) NSString *cardLast4Digits __attribute__((swift_name("cardLast4Digits")));
@property (readonly) NSString *cardPaymentBrand __attribute__((swift_name("cardPaymentBrand")));
@property (readonly) NSString * _Nullable clientEmail __attribute__((swift_name("clientEmail")));
@property (readonly) NSString * _Nullable clientFirstName __attribute__((swift_name("clientFirstName")));
@property (readonly) NSString * _Nullable clientLastName __attribute__((swift_name("clientLastName")));
@property (readonly) NSString * _Nullable clientPhoneNumber __attribute__((swift_name("clientPhoneNumber")));
@property (readonly) BOOL clientRegistered __attribute__((swift_name("clientRegistered")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *discount __attribute__((swift_name("discount")));
@property (readonly) BOOL hasNewRegistration __attribute__((swift_name("hasNewRegistration")));
@property (readonly) NSString * _Nullable hyperpayCheckoutId __attribute__((swift_name("hyperpayCheckoutId")));
@property (readonly) NSString * _Nullable hypersplitId __attribute__((swift_name("hypersplitId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable isApprovedByClient __attribute__((swift_name("isApprovedByClient")));
@property (readonly) BOOL isRefundable __attribute__((swift_name("isRefundable")));
@property (readonly) NSString *merchantBusinessName __attribute__((swift_name("merchantBusinessName")));
@property (readonly) NSString *merchantCountryCode __attribute__((swift_name("merchantCountryCode")));
@property (readonly) NSString * _Nullable merchantPayout __attribute__((swift_name("merchantPayout")));
@property (readonly) NSString * _Nullable orderDetails __attribute__((swift_name("orderDetails")));
@property (readonly) NSString * _Nullable paymentBrand __attribute__((swift_name("paymentBrand")));
@property (readonly) NSString * _Nullable refId __attribute__((swift_name("refId")));
@property (readonly) NSString *shipping __attribute__((swift_name("shipping")));
@property (readonly) NSString * _Nullable shippingDetails __attribute__((swift_name("shippingDetails")));
@property (readonly) NSString * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable storeDomain __attribute__((swift_name("storeDomain")));
@property (readonly) NSString * _Nullable storeLogo __attribute__((swift_name("storeLogo")));
@property (readonly) NSString *taxes __attribute__((swift_name("taxes")));
@property (readonly) NSString *totalAmount __attribute__((swift_name("totalAmount")));
@property (readonly) PaymentKitTransactionTransactionStatus * _Nullable transactionStatus __attribute__((swift_name("transactionStatus")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction.TransactionStatus")))
@interface PaymentKitTransactionTransactionStatus : PaymentKitBase
- (instancetype)initWithCode:(NSString * _Nullable)code description:(NSString * _Nullable)description __attribute__((swift_name("init(code:description:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitTransactionTransactionStatus *)doCopyCode:(NSString * _Nullable)code description:(NSString * _Nullable)description __attribute__((swift_name("doCopy(code:description:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransactionDomainDI")))
@interface PaymentKitTransactionDomainDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)transactionDomainDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitTransactionDomainDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateTransaction")))
@interface PaymentKitCreateTransaction : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitTransactionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeAmount:(double)amount taxes:(double)taxes completionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(amount:taxes:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetSessionId")))
@interface PaymentKitGetSessionId : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitTransactionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)singleWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("single(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTransactionId")))
@interface PaymentKitGetTransactionId : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitTransactionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)singleWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("single(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTransactionStatus")))
@interface PaymentKitGetTransactionStatus : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitTransactionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IsTransactionSucceeded")))
@interface PaymentKitIsTransactionSucceeded : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitTransactionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SaveTransaction")))
@interface PaymentKitSaveTransaction : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitTransactionRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((swift_name("PhoneNumberRepository")))
@protocol PaymentKitPhoneNumberRepository
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getCurrentCountryWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getCurrentCountry(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPhoneNumberWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPhoneNumber(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)savePhoneNumberPhoneNumber:(NSString *)phoneNumber completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("savePhoneNumber(phoneNumber:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)savePhoneNumberPhoneNumber:(NSString *)phoneNumber countryCode:(NSString *)countryCode completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("savePhoneNumber(phoneNumber:countryCode:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendOtpWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sendOtp(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetPhoneNumber")))
@interface PaymentKitGetPhoneNumber : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitPhoneNumberRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SavePhoneNumber")))
@interface PaymentKitSavePhoneNumber : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitPhoneNumberRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokePhoneNumber:(NSString * _Nullable)phoneNumber countryCode:(NSString * _Nullable)countryCode completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(phoneNumber:countryCode:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendOtp")))
@interface PaymentKitSendOtp : PaymentKitBase
- (instancetype)initWithRepository:(id<PaymentKitPhoneNumberRepository>)repository __attribute__((swift_name("init(repository:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id<PaymentKitFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumberDomainDI")))
@interface PaymentKitPhoneNumberDomainDI : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phoneNumberDomainDI __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitPhoneNumberDomainDI *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol PaymentKitKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<PaymentKitKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<PaymentKitKotlinCoroutineContextElement> _Nullable)getKey:(id<PaymentKitKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<PaymentKitKotlinCoroutineContext>)minusKeyKey:(id<PaymentKitKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<PaymentKitKotlinCoroutineContext>)plusContext:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol PaymentKitKotlinCoroutineContextElement <PaymentKitKotlinCoroutineContext>
@required
@property (readonly) id<PaymentKitKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("Job")))
@protocol PaymentKitJob <PaymentKitKotlinCoroutineContextElement>
@required
- (id<PaymentKitChildHandle>)attachChildChild:(id<PaymentKitChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (PaymentKitKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<PaymentKitDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(PaymentKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<PaymentKitDisposableHandle>)invokeOnCompletionHandler:(void (^)(PaymentKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<PaymentKitJob>)plusOther:(id<PaymentKitJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<PaymentKitKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<PaymentKitSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<PaymentKitJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("ChildJob")))
@protocol PaymentKitChildJob <PaymentKitJob>
@required
- (void)parentCancelledParentJob:(id<PaymentKitParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("ParentJob")))
@protocol PaymentKitParentJob <PaymentKitJob>
@required
- (PaymentKitKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("JobSupport")))
@interface PaymentKitJobSupport : PaymentKitBase <PaymentKitJob, PaymentKitChildJob, PaymentKitParentJob>
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable("This is internal API and may be removed in the future releases")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)afterCompletionState:(id _Nullable)state __attribute__((swift_name("afterCompletion(state:)")));
- (id<PaymentKitChildHandle>)attachChildChild:(id<PaymentKitChildJob>)child __attribute__((swift_name("attachChild(child:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)awaitInternalWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitInternal(completionHandler:)")));
- (void)cancelCause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancelCoroutineCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancelCoroutine(cause:)")));
- (void)cancelInternalCause:(PaymentKitKotlinThrowable *)cause __attribute__((swift_name("cancelInternal(cause:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));
- (BOOL)childCancelledCause:(PaymentKitKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (PaymentKitKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (PaymentKitKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
- (PaymentKitKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)handleJobExceptionException:(PaymentKitKotlinThrowable *)exception __attribute__((swift_name("handleJobException(exception:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)doInitParentJobParent:(id<PaymentKitJob> _Nullable)parent __attribute__((swift_name("doInitParentJob(parent:)")));
- (id<PaymentKitDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(PaymentKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<PaymentKitDisposableHandle>)invokeOnCompletionHandler:(void (^)(PaymentKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCancellingCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("onCancelling(cause:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onStart __attribute__((swift_name("onStart()")));
- (void)parentCancelledParentJob:(id<PaymentKitParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
- (BOOL)start __attribute__((swift_name("start()")));
- (NSString *)toDebugString __attribute__((swift_name("toDebugString()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitKotlinCancellationException *)toCancellationException:(PaymentKitKotlinThrowable *)receiver message:(NSString * _Nullable)message __attribute__((swift_name("toCancellationException(_:message:)")));
@property (readonly) id<PaymentKitKotlinSequence> children __attribute__((swift_name("children")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) PaymentKitKotlinThrowable * _Nullable completionCause __attribute__((swift_name("completionCause")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL completionCauseHandled __attribute__((swift_name("completionCauseHandled")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) BOOL isCompletedExceptionally __attribute__((swift_name("isCompletedExceptionally")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL isScopedCoroutine __attribute__((swift_name("isScopedCoroutine")));
@property (readonly) id<PaymentKitKotlinCoroutineContextKey> key __attribute__((swift_name("key")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<PaymentKitSelectClause1> onAwaitInternal __attribute__((swift_name("onAwaitInternal")));
@property (readonly) id<PaymentKitSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@property (readonly) id<PaymentKitJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol PaymentKitKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<PaymentKitKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("CoroutineScope")))
@protocol PaymentKitCoroutineScope
@required
@property (readonly) id<PaymentKitKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("AbstractCoroutine")))
@interface PaymentKitAbstractCoroutine<__contravariant T> : PaymentKitJobSupport <PaymentKitJob, PaymentKitKotlinContinuation, PaymentKitCoroutineScope>
- (instancetype)initWithParentContext:(id<PaymentKitKotlinCoroutineContext>)parentContext initParentJob:(BOOL)initParentJob active:(BOOL)active __attribute__((swift_name("init(parentContext:initParentJob:active:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithActive:(BOOL)active __attribute__((swift_name("init(active:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)afterResumeState:(id _Nullable)state __attribute__((swift_name("afterResume(state:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString *)cancellationExceptionMessage __attribute__((swift_name("cancellationExceptionMessage()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCancelledCause:(PaymentKitKotlinThrowable *)cause handled:(BOOL)handled __attribute__((swift_name("onCancelled(cause:handled:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCompletedValue:(T _Nullable)value __attribute__((swift_name("onCompleted(value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)onCompletionInternalState:(id _Nullable)state __attribute__((swift_name("onCompletionInternal(state:)")));
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
- (void)startStart:(PaymentKitCoroutineStart *)start receiver:(id _Nullable)receiver block:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("start(start:receiver:block:)")));
@property (readonly) id<PaymentKitKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) id<PaymentKitKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@end

__attribute__((swift_name("CancellableContinuation")))
@protocol PaymentKitCancellableContinuation <PaymentKitKotlinContinuation>
@required
- (BOOL)cancelCause_:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (void)completeResumeToken:(id)token __attribute__((swift_name("completeResume(token:)")));
- (void)doInitCancellability __attribute__((swift_name("doInitCancellability()")));
- (void)invokeOnCancellationHandler:(void (^)(PaymentKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCancellation(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resumeValue:(id _Nullable)value onCancellation:(void (^ _Nullable)(PaymentKitKotlinThrowable *))onCancellation __attribute__((swift_name("resume(value:onCancellation:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent __attribute__((swift_name("tryResume(value:idempotent:)")));
- (id _Nullable)tryResumeValue:(id _Nullable)value idempotent:(id _Nullable)idempotent onCancellation:(void (^ _Nullable)(PaymentKitKotlinThrowable *))onCancellation __attribute__((swift_name("tryResume(value:idempotent:onCancellation:)")));
- (id _Nullable)tryResumeWithExceptionException:(PaymentKitKotlinThrowable *)exception __attribute__((swift_name("tryResumeWithException(exception:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resumeUndispatched:(PaymentKitCoroutineDispatcher *)receiver value:(id _Nullable)value __attribute__((swift_name("resumeUndispatched(_:value:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resumeUndispatchedWithException:(PaymentKitCoroutineDispatcher *)receiver exception:(PaymentKitKotlinThrowable *)exception __attribute__((swift_name("resumeUndispatchedWithException(_:exception:)")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@end

__attribute__((swift_name("DisposableHandle")))
@protocol PaymentKitDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((swift_name("ChildHandle")))
@protocol PaymentKitChildHandle <PaymentKitDisposableHandle>
@required
- (BOOL)childCancelledCause:(PaymentKitKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<PaymentKitJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface PaymentKitKotlinAbstractCoroutineContextElement : PaymentKitBase <PaymentKitKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<PaymentKitKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<PaymentKitKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol PaymentKitKotlinContinuationInterceptor <PaymentKitKotlinCoroutineContextElement>
@required
- (id<PaymentKitKotlinContinuation>)interceptContinuationContinuation:(id<PaymentKitKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<PaymentKitKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("CoroutineDispatcher")))
@interface PaymentKitCoroutineDispatcher : PaymentKitKotlinAbstractCoroutineContextElement <PaymentKitKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<PaymentKitKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<PaymentKitKotlinCoroutineContext>)context block:(id<PaymentKitRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<PaymentKitKotlinCoroutineContext>)context block:(id<PaymentKitRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<PaymentKitKotlinContinuation>)interceptContinuationContinuation:(id<PaymentKitKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (PaymentKitCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (PaymentKitCoroutineDispatcher *)plusOther_:(PaymentKitCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<PaymentKitKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("CloseableCoroutineDispatcher")))
@interface PaymentKitCloseableCoroutineDispatcher : PaymentKitCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Deferred")))
@protocol PaymentKitDeferred <PaymentKitJob>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("await(completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (id _Nullable)getCompleted __attribute__((swift_name("getCompleted()")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (PaymentKitKotlinThrowable * _Nullable)getCompletionExceptionOrNull __attribute__((swift_name("getCompletionExceptionOrNull()")));
@property (readonly) id<PaymentKitSelectClause1> onAwait __attribute__((swift_name("onAwait")));
@end

__attribute__((swift_name("CompletableDeferred")))
@protocol PaymentKitCompletableDeferred <PaymentKitDeferred>
@required
- (BOOL)completeValue:(id _Nullable)value __attribute__((swift_name("complete(value:)")));
- (BOOL)completeExceptionallyException:(PaymentKitKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end

__attribute__((swift_name("CompletableJob")))
@protocol PaymentKitCompletableJob <PaymentKitJob>
@required
- (BOOL)complete __attribute__((swift_name("complete()")));
- (BOOL)completeExceptionallyException:(PaymentKitKotlinThrowable *)exception __attribute__((swift_name("completeExceptionally(exception:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface PaymentKitKotlinThrowable : PaymentKitBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface PaymentKitKotlinException : PaymentKitKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface PaymentKitKotlinRuntimeException : PaymentKitKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletionHandlerException")))
@interface PaymentKitCompletionHandlerException : PaymentKitKotlinRuntimeException
- (instancetype)initWithMessage:(NSString *)message cause:(PaymentKitKotlinThrowable *)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
__attribute__((swift_name("CopyableThrowable")))
@protocol PaymentKitCopyableThrowable
@required
- (PaymentKitKotlinThrowable * _Nullable)createCopy __attribute__((swift_name("createCopy()")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol PaymentKitKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface PaymentKitKotlinAbstractCoroutineContextKey<B, E> : PaymentKitBase <PaymentKitKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<PaymentKitKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<PaymentKitKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineDispatcher.Key")))
@interface PaymentKitCoroutineDispatcherKey : PaymentKitKotlinAbstractCoroutineContextKey<id<PaymentKitKotlinContinuationInterceptor>, PaymentKitCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<PaymentKitKotlinCoroutineContextKey>)baseKey safeCast:(id<PaymentKitKotlinCoroutineContextElement> _Nullable (^)(id<PaymentKitKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("CoroutineExceptionHandler")))
@protocol PaymentKitCoroutineExceptionHandler <PaymentKitKotlinCoroutineContextElement>
@required
- (void)handleExceptionContext:(id<PaymentKitKotlinCoroutineContext>)context exception:(PaymentKitKotlinThrowable *)exception __attribute__((swift_name("handleException(context:exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKey")))
@interface PaymentKitCoroutineExceptionHandlerKey : PaymentKitBase <PaymentKitKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCoroutineExceptionHandlerKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName")))
@interface PaymentKitCoroutineName : PaymentKitKotlinAbstractCoroutineContextElement
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithKey:(id<PaymentKitKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitCoroutineNameKey *companion __attribute__((swift_name("companion")));
- (PaymentKitCoroutineName *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineName.Key")))
@interface PaymentKitCoroutineNameKey : PaymentKitBase <PaymentKitKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitCoroutineNameKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineStart")))
@interface PaymentKitCoroutineStart : PaymentKitKotlinEnum<PaymentKitCoroutineStart *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PaymentKitCoroutineStart *default_ __attribute__((swift_name("default_")));
@property (class, readonly) PaymentKitCoroutineStart *lazy __attribute__((swift_name("lazy")));
@property (class, readonly) PaymentKitCoroutineStart *atomic __attribute__((swift_name("atomic")));
@property (class, readonly) PaymentKitCoroutineStart *undispatched __attribute__((swift_name("undispatched")));
+ (PaymentKitKotlinArray<PaymentKitCoroutineStart *> *)values __attribute__((swift_name("values()")));
- (void)invokeBlock:(id<PaymentKitKotlinSuspendFunction0>)block completion:(id<PaymentKitKotlinContinuation>)completion __attribute__((swift_name("invoke(block:completion:)")));
- (void)invokeBlock:(id<PaymentKitKotlinSuspendFunction1>)block receiver:(id _Nullable)receiver completion:(id<PaymentKitKotlinContinuation>)completion __attribute__((swift_name("invoke(block:receiver:completion:)")));
@property (readonly) BOOL isLazy __attribute__((swift_name("isLazy")));
@end

__attribute__((swift_name("Delay")))
@protocol PaymentKitDelay
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)delayTime:(int64_t)time completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(time:completionHandler:)"))) __attribute__((unavailable("Deprecated without replacement as an internal method never intended for public use")));
- (id<PaymentKitDisposableHandle>)invokeOnTimeoutTimeMillis:(int64_t)timeMillis block:(id<PaymentKitRunnable>)block context:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("invokeOnTimeout(timeMillis:block:context:)")));
- (void)scheduleResumeAfterDelayTimeMillis:(int64_t)timeMillis continuation:(id<PaymentKitCancellableContinuation>)continuation __attribute__((swift_name("scheduleResumeAfterDelay(timeMillis:continuation:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Dispatchers")))
@interface PaymentKitDispatchers : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dispatchers __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitDispatchers *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitCoroutineDispatcher *Default __attribute__((swift_name("Default")));
@property (readonly) PaymentKitMainCoroutineDispatcher *Main __attribute__((swift_name("Main")));
@property (readonly) PaymentKitCoroutineDispatcher *Unconfined __attribute__((swift_name("Unconfined")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalScope")))
@interface PaymentKitGlobalScope : PaymentKitBase <PaymentKitCoroutineScope>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)globalScope __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitGlobalScope *shared __attribute__((swift_name("shared")));
@property (readonly) id<PaymentKitKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKey")))
@interface PaymentKitJobKey : PaymentKitBase <PaymentKitKotlinCoroutineContextKey>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitJobKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("MainCoroutineDispatcher")))
@interface PaymentKitMainCoroutineDispatcher : PaymentKitCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PaymentKitCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString * _Nullable)toStringInternalImpl __attribute__((swift_name("toStringInternalImpl()")));
@property (readonly) PaymentKitMainCoroutineDispatcher *immediate __attribute__((swift_name("immediate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonCancellable")))
@interface PaymentKitNonCancellable : PaymentKitKotlinAbstractCoroutineContextElement <PaymentKitJob>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithKey:(id<PaymentKitKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)nonCancellable __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitNonCancellable *shared __attribute__((swift_name("shared")));
- (id<PaymentKitChildHandle>)attachChildChild:(id<PaymentKitChildJob>)child __attribute__((swift_name("attachChild(child:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (void)cancelCause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (PaymentKitKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<PaymentKitDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(PaymentKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (id<PaymentKitDisposableHandle>)invokeOnCompletionHandler:(void (^)(PaymentKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (BOOL)start __attribute__((swift_name("start()"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PaymentKitKotlinSequence> children __attribute__((swift_name("children"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) id<PaymentKitSelectClause0> onJoin __attribute__((swift_name("onJoin"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@property (readonly) id<PaymentKitJob> _Nullable parent __attribute__((swift_name("parent"))) __attribute__((deprecated("NonCancellable can be used only as an argument for 'withContext', direct usages of its API are prohibited")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NonDisposableHandle")))
@interface PaymentKitNonDisposableHandle : PaymentKitBase <PaymentKitDisposableHandle, PaymentKitChildHandle>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)nonDisposableHandle __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitNonDisposableHandle *shared __attribute__((swift_name("shared")));
- (BOOL)childCancelledCause:(PaymentKitKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PaymentKitJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Runnable")))
@protocol PaymentKitRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface PaymentKitKotlinIllegalStateException : PaymentKitKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface PaymentKitKotlinCancellationException : PaymentKitKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutCancellationException")))
@interface PaymentKitTimeoutCancellationException : PaymentKitKotlinCancellationException <PaymentKitCopyableThrowable>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (PaymentKitTimeoutCancellationException *)createCopy __attribute__((swift_name("createCopy()")));
@end

__attribute__((swift_name("SendChannel")))
@protocol PaymentKitSendChannel
@required
- (BOOL)closeCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(PaymentKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(id _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(id _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(id _Nullable)element __attribute__((swift_name("trySend(element:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<PaymentKitSelectClause2> onSend __attribute__((swift_name("onSend")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
__attribute__((swift_name("BroadcastChannel")))
@protocol PaymentKitBroadcastChannel <PaymentKitSendChannel>
@required
- (void)cancelCause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<PaymentKitReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BufferOverflow")))
@interface PaymentKitBufferOverflow : PaymentKitKotlinEnum<PaymentKitBufferOverflow *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PaymentKitBufferOverflow *suspend __attribute__((swift_name("suspend")));
@property (class, readonly) PaymentKitBufferOverflow *dropOldest __attribute__((swift_name("dropOldest")));
@property (class, readonly) PaymentKitBufferOverflow *dropLatest __attribute__((swift_name("dropLatest")));
+ (PaymentKitKotlinArray<PaymentKitBufferOverflow *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("ReceiveChannel")))
@protocol PaymentKitReceiveChannel
@required
- (void)cancelCause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (id<PaymentKitChannelIterator>)iterator __attribute__((swift_name("iterator()")));
- (id _Nullable)poll __attribute__((swift_name("poll()"))) __attribute__((unavailable("Deprecated in the favour of 'tryReceive'. Please note that the provided replacement does not rethrow channel's close cause as 'poll' did, for the precise replacement please refer to the 'poll' documentation")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receive(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveCatchingWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveCatching(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)receiveOrNullWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("receiveOrNull(completionHandler:)"))) __attribute__((unavailable("Deprecated in favor of 'receiveCatching'. Please note that the provided replacement does not rethrow channel's close cause as 'receiveOrNull' did, for the detailed replacement please refer to the 'receiveOrNull' documentation")));
- (id _Nullable)tryReceive __attribute__((swift_name("tryReceive()")));

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
@property (readonly) BOOL isClosedForReceive __attribute__((swift_name("isClosedForReceive")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) id<PaymentKitSelectClause1> onReceive __attribute__((swift_name("onReceive")));
@property (readonly) id<PaymentKitSelectClause1> onReceiveCatching __attribute__((swift_name("onReceiveCatching")));
@property (readonly) id<PaymentKitSelectClause1> onReceiveOrNull __attribute__((swift_name("onReceiveOrNull"))) __attribute__((unavailable("Deprecated in favor of onReceiveCatching extension")));
@end

__attribute__((swift_name("Channel")))
@protocol PaymentKitChannel <PaymentKitSendChannel, PaymentKitReceiveChannel>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelFactory")))
@interface PaymentKitChannelFactory : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)factory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitChannelFactory *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t BUFFERED __attribute__((swift_name("BUFFERED")));
@property (readonly) int32_t CONFLATED __attribute__((swift_name("CONFLATED")));
@property (readonly) NSString *DEFAULT_BUFFER_PROPERTY_NAME __attribute__((swift_name("DEFAULT_BUFFER_PROPERTY_NAME")));
@property (readonly) int32_t RENDEZVOUS __attribute__((swift_name("RENDEZVOUS")));
@property (readonly) int32_t UNLIMITED __attribute__((swift_name("UNLIMITED")));
@end

__attribute__((swift_name("ChannelIterator")))
@protocol PaymentKitChannelIterator
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(PaymentKitBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinNoSuchElementException")))
@interface PaymentKitKotlinNoSuchElementException : PaymentKitKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedReceiveChannelException")))
@interface PaymentKitClosedReceiveChannelException : PaymentKitKotlinNoSuchElementException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClosedSendChannelException")))
@interface PaymentKitClosedSendChannelException : PaymentKitKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConflatedBroadcastChannel")))
@interface PaymentKitConflatedBroadcastChannel<E> : PaymentKitBase <PaymentKitBroadcastChannel>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("ConflatedBroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithValue:(E _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("ConflatedBroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));
- (void)cancelCause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)closeCause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("close(cause:)")));
- (void)invokeOnCloseHandler:(void (^)(PaymentKitKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnClose(handler:)")));
- (BOOL)offerElement:(E _Nullable)element __attribute__((swift_name("offer(element:)"))) __attribute__((unavailable("Deprecated in the favour of 'trySend' method")));
- (id<PaymentKitReceiveChannel>)openSubscription __attribute__((swift_name("openSubscription()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)sendElement:(E _Nullable)element completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("send(element:completionHandler:)")));
- (id _Nullable)trySendElement:(E _Nullable)element __attribute__((swift_name("trySend(element:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.DelicateCoroutinesApi
*/
@property (readonly) BOOL isClosedForSend __attribute__((swift_name("isClosedForSend")));
@property (readonly) id<PaymentKitSelectClause2> onSend __attribute__((swift_name("onSend")));
@property (readonly) E _Nullable value __attribute__((swift_name("value")));
@property (readonly) E _Nullable valueOrNull __attribute__((swift_name("valueOrNull")));
@end

__attribute__((swift_name("ProducerScope")))
@protocol PaymentKitProducerScope <PaymentKitCoroutineScope, PaymentKitSendChannel>
@required
@property (readonly) id<PaymentKitSendChannel> channel __attribute__((swift_name("channel")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
__attribute__((swift_name("AbstractFlow")))
@interface PaymentKitAbstractFlow<T> : PaymentKitBase <PaymentKitFlow>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PaymentKitFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectSafelyCollector:(id<PaymentKitFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectSafely(collector:completionHandler:)")));
@end

__attribute__((swift_name("FlowCollector")))
@protocol PaymentKitFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("SharedFlow")))
@protocol PaymentKitSharedFlow <PaymentKitFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("MutableSharedFlow")))
@protocol PaymentKitMutableSharedFlow <PaymentKitSharedFlow, PaymentKitFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<PaymentKitStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((swift_name("StateFlow")))
@protocol PaymentKitStateFlow <PaymentKitSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("MutableStateFlow")))
@protocol PaymentKitMutableStateFlow <PaymentKitStateFlow, PaymentKitMutableSharedFlow>
@required
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingCommand")))
@interface PaymentKitSharingCommand : PaymentKitKotlinEnum<PaymentKitSharingCommand *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PaymentKitSharingCommand *start __attribute__((swift_name("start")));
@property (class, readonly) PaymentKitSharingCommand *stop __attribute__((swift_name("stop")));
@property (class, readonly) PaymentKitSharingCommand *stopAndResetReplayCache __attribute__((swift_name("stopAndResetReplayCache")));
+ (PaymentKitKotlinArray<PaymentKitSharingCommand *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("SharingStarted")))
@protocol PaymentKitSharingStarted
@required
- (id<PaymentKitFlow>)commandSubscriptionCount:(id<PaymentKitStateFlow>)subscriptionCount __attribute__((swift_name("command(subscriptionCount:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingStartedCompanion")))
@interface PaymentKitSharingStartedCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitSharingStartedCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitSharingStarted>)WhileSubscribedStopTimeoutMillis:(int64_t)stopTimeoutMillis replayExpirationMillis:(int64_t)replayExpirationMillis __attribute__((swift_name("WhileSubscribed(stopTimeoutMillis:replayExpirationMillis:)")));
@property (readonly) id<PaymentKitSharingStarted> Eagerly __attribute__((swift_name("Eagerly")));
@property (readonly) id<PaymentKitSharingStarted> Lazily __attribute__((swift_name("Lazily")));
@end

__attribute__((swift_name("FusibleFlow")))
@protocol PaymentKitFusibleFlow <PaymentKitFlow>
@required
- (id<PaymentKitFlow>)fuseContext:(id<PaymentKitKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(PaymentKitBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
@end

__attribute__((swift_name("ChannelFlow")))
@interface PaymentKitChannelFlow<T> : PaymentKitBase <PaymentKitFusibleFlow>
- (instancetype)initWithContext:(id<PaymentKitKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(PaymentKitBufferOverflow *)onBufferOverflow __attribute__((swift_name("init(context:capacity:onBufferOverflow:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSString * _Nullable)additionalToStringProps __attribute__((swift_name("additionalToStringProps()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<PaymentKitFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)collectToScope:(id<PaymentKitProducerScope>)scope completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectTo(scope:completionHandler:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitChannelFlow<T> *)createContext:(id<PaymentKitKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(PaymentKitBufferOverflow *)onBufferOverflow __attribute__((swift_name("create(context:capacity:onBufferOverflow:)")));
- (id<PaymentKitFlow> _Nullable)dropChannelOperators __attribute__((swift_name("dropChannelOperators()")));
- (id<PaymentKitFlow>)fuseContext:(id<PaymentKitKotlinCoroutineContext>)context capacity:(int32_t)capacity onBufferOverflow:(PaymentKitBufferOverflow *)onBufferOverflow __attribute__((swift_name("fuse(context:capacity:onBufferOverflow:)")));
- (id<PaymentKitReceiveChannel>)produceImplScope:(id<PaymentKitCoroutineScope>)scope __attribute__((swift_name("produceImpl(scope:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) id<PaymentKitKotlinCoroutineContext> context __attribute__((swift_name("context")));
@property (readonly) PaymentKitBufferOverflow *onBufferOverflow __attribute__((swift_name("onBufferOverflow")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SendingCollector")))
@interface PaymentKitSendingCollector<T> : PaymentKitBase <PaymentKitFlowCollector>
- (instancetype)initWithChannel:(id<PaymentKitSendChannel>)channel __attribute__((swift_name("init(channel:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("SelectBuilder")))
@protocol PaymentKitSelectBuilder
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)onTimeoutTimeMillis:(int64_t)timeMillis block:(id<PaymentKitKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(timeMillis:block:)"))) __attribute__((unavailable("Replaced with the same extension function")));
- (void)invoke:(id<PaymentKitSelectClause0>)receiver block:(id<PaymentKitKotlinSuspendFunction0>)block __attribute__((swift_name("invoke(_:block:)")));
- (void)invoke:(id<PaymentKitSelectClause1>)receiver block_:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block_:)")));
- (void)invoke:(id<PaymentKitSelectClause2>)receiver param:(id _Nullable)param block:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:param:block:)")));
- (void)invoke:(id<PaymentKitSelectClause2>)receiver block__:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("invoke(_:block__:)")));
@end

__attribute__((swift_name("SelectClause")))
@protocol PaymentKitSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) PaymentKitKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<PaymentKitSelectInstance>, id _Nullable, id _Nullable))(PaymentKitKotlinThrowable *) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<PaymentKitSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("SelectClause0")))
@protocol PaymentKitSelectClause0 <PaymentKitSelectClause>
@required
@end

__attribute__((swift_name("SelectClause1")))
@protocol PaymentKitSelectClause1 <PaymentKitSelectClause>
@required
@end

__attribute__((swift_name("SelectClause2")))
@protocol PaymentKitSelectClause2 <PaymentKitSelectClause>
@required
@end

__attribute__((swift_name("SelectInstance")))
@protocol PaymentKitSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<PaymentKitDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<PaymentKitKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((swift_name("OpDescriptor")))
@interface PaymentKitOpDescriptor : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("AtomicOp")))
@interface PaymentKitAtomicOp<__contravariant T> : PaymentKitOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) PaymentKitAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("LockFreeLinkedListNode")))
@interface PaymentKitLockFreeLinkedListNode : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(PaymentKitLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(PaymentKitLockFreeLinkedListNode *)node condition:(PaymentKitBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addOneIfEmptyNode:(PaymentKitLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) PaymentKitLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) PaymentKitLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("LockFreeLinkedListHead")))
@interface PaymentKitLockFreeLinkedListHead : PaymentKitLockFreeLinkedListNode
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)forEachBlock:(void (^)(PaymentKitLockFreeLinkedListNode *))block __attribute__((swift_name("forEach(block:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@end

__attribute__((swift_name("MainDispatcherFactory")))
@protocol PaymentKitMainDispatcherFactory
@required
- (PaymentKitMainCoroutineDispatcher *)createDispatcherAllFactories:(NSArray<id<PaymentKitMainDispatcherFactory>> *)allFactories __attribute__((swift_name("createDispatcher(allFactories:)")));
- (NSString * _Nullable)hintOnError __attribute__((swift_name("hintOnError()")));
@property (readonly) int32_t loadPriority __attribute__((swift_name("loadPriority")));
@end

__attribute__((swift_name("AtomicfuSynchronizedObject")))
@interface PaymentKitAtomicfuSynchronizedObject : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)lock __attribute__((swift_name("lock()")));
- (BOOL)tryLock __attribute__((swift_name("tryLock()")));
- (void)unlock __attribute__((swift_name("unlock()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly, getter=lock_) PaymentKitKotlinAtomicReference<PaymentKitAtomicfuSynchronizedObjectLockState *> *lock __attribute__((swift_name("lock")));
@end

__attribute__((swift_name("ThreadSafeHeap")))
@interface PaymentKitThreadSafeHeap<T> : PaymentKitAtomicfuSynchronizedObject
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(T)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(T)node cond:(PaymentKitBoolean *(^)(T _Nullable))cond __attribute__((swift_name("addLastIf(node:cond:)")));
- (void)clear __attribute__((swift_name("clear()")));
- (T _Nullable)findPredicate:(PaymentKitBoolean *(^)(T))predicate __attribute__((swift_name("find(predicate:)")));
- (T _Nullable)peek __attribute__((swift_name("peek()")));
- (BOOL)removeNode:(T)node __attribute__((swift_name("remove(node:)")));
- (T _Nullable)removeFirstIfPredicate:(PaymentKitBoolean *(^)(T))predicate __attribute__((swift_name("removeFirstIf(predicate:)")));
- (T _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("ThreadSafeHeapNode")))
@protocol PaymentKitThreadSafeHeapNode
@required
@property PaymentKitThreadSafeHeap<id> * _Nullable heap __attribute__((swift_name("heap")));
@property int32_t index __attribute__((swift_name("index")));
@end

__attribute__((swift_name("Mutex")))
@protocol PaymentKitMutex
@required
- (BOOL)holdsLockOwner:(id)owner __attribute__((swift_name("holdsLock(owner:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)lockOwner:(id _Nullable)owner completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("lock(owner:completionHandler:)")));
- (BOOL)tryLockOwner:(id _Nullable)owner __attribute__((swift_name("tryLock(owner:)")));
- (void)unlockOwner:(id _Nullable)owner __attribute__((swift_name("unlock(owner:)")));
@property (readonly) BOOL isLocked __attribute__((swift_name("isLocked")));
@property (readonly) id<PaymentKitSelectClause2> onLock __attribute__((swift_name("onLock"))) __attribute__((deprecated("Mutex.onLock deprecated without replacement. For additional details please refer to #2794")));
@end

__attribute__((swift_name("Semaphore")))
@protocol PaymentKitSemaphore
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)acquireWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("acquire(completionHandler:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (BOOL)tryAcquire __attribute__((swift_name("tryAcquire()")));
@property (readonly) int32_t availablePermits __attribute__((swift_name("availablePermits")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DependencyGraph")))
@interface PaymentKitDependencyGraph : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PaymentKitCardsViewModel *)getCardsViewModel __attribute__((swift_name("getCardsViewModel()")));
- (PaymentKitLauncherViewModel *)getLauncherViewModel __attribute__((swift_name("getLauncherViewModel()")));
- (PaymentKitOtpViewModel *)getOTPViewModel __attribute__((swift_name("getOTPViewModel()")));
- (PaymentKitPhoneNumberViewModel *)getPhoneNumberViewModel __attribute__((swift_name("getPhoneNumberViewModel()")));
- (PaymentKitSuccessViewModel *)getSuccessViewModel __attribute__((swift_name("getSuccessViewModel()")));
- (PaymentKitWebauthnViewModel *)getWebauthnViewModel __attribute__((swift_name("getWebauthnViewModel()")));
- (void)provideWebauthnProxyWebauthnProxy:(id<PaymentKitWebauthnProxy>)webauthnProxy __attribute__((swift_name("provideWebauthnProxy(webauthnProxy:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface PaymentKitGreeting : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greet __attribute__((swift_name("greet()")));
@end

__attribute__((swift_name("Platform")))
@protocol PaymentKitPlatform
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IOSPlatform")))
@interface PaymentKitIOSPlatform : PaymentKitBase <PaymentKitPlatform>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

@interface PaymentKitViewModel (Extensions)
@property (readonly) PaymentKitKotlinUnit *(^(^sideEffectFlow)(PaymentKitKotlinUnit *(^)(id<PaymentKitEffect>, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("sideEffectFlow")));
@property (readonly) NSArray<id<PaymentKitEffect>> *sideEffectReplayCache __attribute__((swift_name("sideEffectReplayCache")));
@property (readonly) PaymentKitKotlinUnit *(^(^stateFlow)(PaymentKitKotlinUnit *(^)(id<PaymentKitState>, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("stateFlow")));
@property (readonly) id<PaymentKitState> state __attribute__((swift_name("state")));
@end

@interface PaymentKitCardNumberController (Extensions)
@property (readonly) PaymentKitKotlinUnit *(^(^cardBrandFlowFlow)(PaymentKitKotlinUnit *(^)(PaymentKitCardBrand *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("cardBrandFlowFlow")));
@end

@interface PaymentKitCardNumberEditableController (Extensions)
@property (readonly) PaymentKitKotlinUnit *(^(^cardBrandFlowFlow_)(PaymentKitKotlinUnit *(^)(PaymentKitCardBrand *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("cardBrandFlowFlow_")));
@property (readonly) PaymentKitKotlinUnit *(^(^errorFlow)(PaymentKitKotlinUnit *(^)(PaymentKitFieldError * _Nullable, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("errorFlow")));
@property (readonly) PaymentKitKotlinUnit *(^(^fieldStateFlow)(PaymentKitKotlinUnit *(^)(id<PaymentKitTextFieldState>, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("fieldStateFlow")));
@property (readonly) PaymentKitKotlinUnit *(^(^fieldValueFlow)(PaymentKitKotlinUnit *(^)(NSString *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("fieldValueFlow")));
@property (readonly) PaymentKitKotlinUnit *(^(^isCompleteFlow)(PaymentKitKotlinUnit *(^)(PaymentKitBoolean *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("isCompleteFlow")));
@property (readonly) PaymentKitKotlinUnit *(^(^loadingFlow)(PaymentKitKotlinUnit *(^)(PaymentKitBoolean *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("loadingFlow")));
@property (readonly) PaymentKitKotlinUnit *(^(^rawFieldValueFlow)(PaymentKitKotlinUnit *(^)(NSString *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("rawFieldValueFlow")));
@property (readonly) PaymentKitKotlinUnit *(^(^trailingIconFlow)(PaymentKitKotlinUnit *(^)(PaymentKitTextFieldIcon * _Nullable, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("trailingIconFlow")));
@end

@interface PaymentKitCardDetailsController (Extensions)
@property (readonly) PaymentKitKotlinUnit *(^(^errorFlow)(PaymentKitKotlinUnit *(^)(PaymentKitFieldError * _Nullable, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("errorFlow")));
@property (readonly) PaymentKitKotlinUnit *(^(^getFormValidationFlow)(PaymentKitKotlinUnit *(^)(PaymentKitBoolean *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("getFormValidationFlow")));
@end

@interface PaymentKitAddressElement (Extensions)
@property (readonly) PaymentKitKotlinUnit *(^(^fieldsFlow)(PaymentKitKotlinUnit *(^)(NSArray<id<PaymentKitSectionFieldElement>> *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("fieldsFlow")));
@end

@interface PaymentKitPhoneNumberController (Extensions)
@property (readonly) PaymentKitKotlinUnit *(^(^formFieldValueFlow)(PaymentKitKotlinUnit *(^)(PaymentKitFormFieldEntry *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("formFieldValueFlow")));
@property (readonly) PaymentKitKotlinUnit *(^(^isCompleteFlow)(PaymentKitKotlinUnit *(^)(PaymentKitBoolean *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("isCompleteFlow")));
@property (readonly) PaymentKitKotlinUnit *(^(^rawFieldValueFlow)(PaymentKitKotlinUnit *(^)(NSString *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("rawFieldValueFlow")));
@end

@interface PaymentKitCardDetailsElement (Extensions)
@property (readonly) PaymentKitKotlinUnit *(^(^formValuesFlow)(PaymentKitKotlinUnit *(^)(NSArray<PaymentKitFormFieldEntry *> *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("formValuesFlow")));
@end

@interface PaymentKitAddressController (Extensions)
@property (readonly) PaymentKitKotlinUnit *(^(^isCompleteFlow)(PaymentKitKotlinUnit *(^)(PaymentKitBoolean *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("isCompleteFlow")));
@end

@interface PaymentKitDropdownFieldController (Extensions)
@property (readonly) PaymentKitKotlinUnit *(^(^selectedIndexFlow)(PaymentKitKotlinUnit *(^)(PaymentKitInt *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void) __attribute__((swift_name("selectedIndexFlow")));
@property (readonly) int32_t selectedIndex __attribute__((swift_name("selectedIndex")));
@end

@interface PaymentKitUser (Extensions)
- (id<PaymentKitRegistrationStep>)checkMissingRegistrationSteps __attribute__((swift_name("checkMissingRegistrationSteps()")));
@end

@interface PaymentKitAddedCardResult (Extensions)
- (BOOL)hasRedirection __attribute__((swift_name("hasRedirection()")));
@end

@interface PaymentKitTransaction (Extensions)
- (BOOL)isSucceeded __attribute__((swift_name("isSucceeded()")));
@end

@interface PaymentKitDispatchers (Extensions)
@property (readonly) PaymentKitCoroutineDispatcher *IO __attribute__((swift_name("IO")));
@end

@interface PaymentKitCoroutineDispatcher (Extensions)

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeBlock:(id<PaymentKitKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(block:completionHandler:)")));
@end

@interface PaymentKitSharingStartedCompanion (Extensions)
- (id<PaymentKitSharingStarted>)WhileSubscribedStopTimeout:(int64_t)stopTimeout replayExpiration:(int64_t)replayExpiration __attribute__((swift_name("WhileSubscribed(stopTimeout:replayExpiration:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface PaymentKitKotlinArray<T> : PaymentKitBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(PaymentKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<PaymentKitKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface PaymentKitKotlinArray (Extensions)
- (id<PaymentKitFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntArray")))
@interface PaymentKitKotlinIntArray : PaymentKitBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PaymentKitInt *(^)(PaymentKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int32_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PaymentKitKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int32_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface PaymentKitKotlinIntArray (Extensions)
- (id<PaymentKitFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongArray")))
@interface PaymentKitKotlinLongArray : PaymentKitBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PaymentKitLong *(^)(PaymentKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int64_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PaymentKitKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int64_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

@interface PaymentKitKotlinLongArray (Extensions)
- (id<PaymentKitFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol PaymentKitKotlinIterable
@required
- (id<PaymentKitKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface PaymentKitKotlinIntProgression : PaymentKitBase <PaymentKitKotlinIterable>
@property (class, readonly, getter=companion) PaymentKitKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (PaymentKitKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol PaymentKitKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol PaymentKitKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface PaymentKitKotlinIntRange : PaymentKitKotlinIntProgression <PaymentKitKotlinClosedRange, PaymentKitKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(PaymentKitInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(PaymentKitInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
@property (readonly) PaymentKitInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) PaymentKitInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) PaymentKitInt *start __attribute__((swift_name("start")));
@end

@interface PaymentKitKotlinIntRange (Extensions)
- (id<PaymentKitFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

__attribute__((swift_name("KotlinLongProgression")))
@interface PaymentKitKotlinLongProgression : PaymentKitBase <PaymentKitKotlinIterable>
@property (class, readonly, getter=companion) PaymentKitKotlinLongProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (PaymentKitKotlinLongIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t first __attribute__((swift_name("first")));
@property (readonly) int64_t last __attribute__((swift_name("last")));
@property (readonly) int64_t step __attribute__((swift_name("step")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange")))
@interface PaymentKitKotlinLongRange : PaymentKitKotlinLongProgression <PaymentKitKotlinClosedRange, PaymentKitKotlinOpenEndRange>
- (instancetype)initWithStart:(int64_t)start endInclusive:(int64_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKotlinLongRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(PaymentKitLong *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(PaymentKitLong *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
@property (readonly) PaymentKitLong *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Long type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) PaymentKitLong *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) PaymentKitLong *start __attribute__((swift_name("start")));
@end

@interface PaymentKitKotlinLongRange (Extensions)
- (id<PaymentKitFlow>)asFlow __attribute__((swift_name("asFlow()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncryptedStoreKt")))
@interface PaymentKitEncryptedStoreKt : PaymentKitBase
@property (class, readonly) NSString *ENCRYPTED_DATABASE_NAME __attribute__((swift_name("ENCRYPTED_DATABASE_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonConverterKt")))
@interface PaymentKitJsonConverterKt : PaymentKitBase
+ (id _Nullable)decodeFromString:(NSString *)receiver __attribute__((swift_name("decodeFromString(_:)")));
+ (NSString *)encodeToJson:(id _Nullable)receiver __attribute__((swift_name("encodeToJson(_:)")));
@property (class, readonly) PaymentKitKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateViewModelScopeKt")))
@interface PaymentKitCreateViewModelScopeKt : PaymentKitBase
@property (class) id<PaymentKitCoroutineScope> (^createViewModelScope)(void) __attribute__((swift_name("createViewModelScope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NanoReduxKt")))
@interface PaymentKitNanoReduxKt : PaymentKitBase
+ (id<PaymentKitFlow>)onEmptyEmitFrom:(id<PaymentKitFlow>)receiver flow:(id<PaymentKitKotlinSuspendFunction0>)flow __attribute__((swift_name("onEmptyEmitFrom(_:flow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CFlowKt")))
@interface PaymentKitCFlowKt : PaymentKitBase
+ (PaymentKitCFlow<id> *)wrap:(id<PaymentKitFlow>)receiver __attribute__((swift_name("wrap(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SectionFieldErrorControllerNativeKt")))
@interface PaymentKitSectionFieldErrorControllerNativeKt : PaymentKitBase
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(PaymentKitFieldError * _Nullable, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))errorFlow:(id<PaymentKitSectionFieldErrorController>)receiver __attribute__((swift_name("errorFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextFieldControllerNativeKt")))
@interface PaymentKitTextFieldControllerNativeKt : PaymentKitBase
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(id<PaymentKitTextFieldState>, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))fieldStateFlow:(id<PaymentKitTextFieldController>)receiver __attribute__((swift_name("fieldStateFlow(_:)")));
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(NSString *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))fieldValueFlow:(id<PaymentKitTextFieldController>)receiver __attribute__((swift_name("fieldValueFlow(_:)")));
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(NSString *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))labelFlow:(id<PaymentKitTextFieldController>)receiver __attribute__((swift_name("labelFlow(_:)")));
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(PaymentKitBoolean *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))loadingFlow:(id<PaymentKitTextFieldController>)receiver __attribute__((swift_name("loadingFlow(_:)")));
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(PaymentKitTextFieldIcon * _Nullable, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))trailingIconFlow:(id<PaymentKitTextFieldController>)receiver __attribute__((swift_name("trailingIconFlow(_:)")));
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(PaymentKitBoolean *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))visibleErrorFlow:(id<PaymentKitTextFieldController>)receiver __attribute__((swift_name("visibleErrorFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InputControllerNativeKt")))
@interface PaymentKitInputControllerNativeKt : PaymentKitBase
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(NSString *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))fieldValueFlow:(id<PaymentKitInputController>)receiver __attribute__((swift_name("fieldValueFlow(_:)")));
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(PaymentKitFormFieldEntry *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))formFieldValueFlow:(id<PaymentKitInputController>)receiver __attribute__((swift_name("formFieldValueFlow(_:)")));
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(PaymentKitBoolean *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))isCompleteFlow:(id<PaymentKitInputController>)receiver __attribute__((swift_name("isCompleteFlow(_:)")));
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(NSString *, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))labelFlow:(id<PaymentKitInputController>)receiver __attribute__((swift_name("labelFlow(_:)")));
+ (PaymentKitKotlinUnit *(^(^)(PaymentKitKotlinUnit *(^)(NSString * _Nullable, PaymentKitKotlinUnit *(^)(void), PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError * _Nullable, PaymentKitKotlinUnit *), PaymentKitKotlinUnit *(^)(NSError *, PaymentKitKotlinUnit *)))(void))rawFieldValueFlow:(id<PaymentKitInputController>)receiver __attribute__((swift_name("rawFieldValueFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CardDetailsElementKt")))
@interface PaymentKitCardDetailsElementKt : PaymentKitBase
+ (NSDictionary<PaymentKitIdentifierSpec *, PaymentKitFormFieldEntry *> *)createExpiryDateFormFieldValuesEntry:(PaymentKitFormFieldEntry *)entry __attribute__((swift_name("createExpiryDateFormFieldValues(entry:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JobKt")))
@interface PaymentKitJobKt : PaymentKitBase
+ (BOOL)isActive:(id<PaymentKitKotlinCoroutineContext>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<PaymentKitJob>)job:(id<PaymentKitKotlinCoroutineContext>)receiver __attribute__((swift_name("job(_:)")));
+ (id<PaymentKitCompletableJob>)JobParent:(id<PaymentKitJob> _Nullable)parent __attribute__((swift_name("Job(parent:)")));
+ (void)cancel:(id<PaymentKitKotlinCoroutineContext>)receiver cause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)cancel:(id<PaymentKitJob>)receiver message:(NSString *)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)cancelAndJoin:(id<PaymentKitJob>)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("cancelAndJoin(_:completionHandler:)")));
+ (void)cancelChildren:(id<PaymentKitKotlinCoroutineContext>)receiver cause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause:)")));
+ (void)cancelChildren:(id<PaymentKitJob>)receiver cause_:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancelChildren(_:cause_:)")));
+ (void)ensureActive:(id<PaymentKitKotlinCoroutineContext>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (void)ensureActive_:(id<PaymentKitJob>)receiver __attribute__((swift_name("ensureActive(__:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineScopeKt")))
@interface PaymentKitCoroutineScopeKt : PaymentKitBase
+ (BOOL)isActive:(id<PaymentKitCoroutineScope>)receiver __attribute__((swift_name("isActive(_:)")));
+ (id<PaymentKitCoroutineScope>)CoroutineScopeContext:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("CoroutineScope(context:)")));
+ (id<PaymentKitCoroutineScope>)MainScope __attribute__((swift_name("MainScope()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)coroutineScopeBlock:(id<PaymentKitKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("coroutineScope(block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)currentCoroutineContextWithCompletionHandler:(void (^)(id<PaymentKitKotlinCoroutineContext> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("currentCoroutineContext(completionHandler:)")));
+ (void)cancel:(id<PaymentKitCoroutineScope>)receiver message:(NSString *)message cause:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(_:message:cause:)")));
+ (void)cancel:(id<PaymentKitCoroutineScope>)receiver cause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)")));
+ (void)ensureActive:(id<PaymentKitCoroutineScope>)receiver __attribute__((swift_name("ensureActive(_:)")));
+ (id<PaymentKitCoroutineScope>)plus:(id<PaymentKitCoroutineScope>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("plus(_:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CompletableDeferredKt")))
@interface PaymentKitCompletableDeferredKt : PaymentKitBase
+ (id<PaymentKitCompletableDeferred>)CompletableDeferredValue:(id _Nullable)value __attribute__((swift_name("CompletableDeferred(value:)")));
+ (id<PaymentKitCompletableDeferred>)CompletableDeferredParent:(id<PaymentKitJob> _Nullable)parent __attribute__((swift_name("CompletableDeferred(parent:)")));
+ (BOOL)completeWith:(id<PaymentKitCompletableDeferred>)receiver result:(id _Nullable)result __attribute__((swift_name("completeWith(_:result:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineExceptionHandlerKt")))
@interface PaymentKitCoroutineExceptionHandlerKt : PaymentKitBase
+ (id<PaymentKitCoroutineExceptionHandler>)CoroutineExceptionHandlerHandler:(void (^)(id<PaymentKitKotlinCoroutineContext>, PaymentKitKotlinThrowable *))handler __attribute__((swift_name("CoroutineExceptionHandler(handler:)")));
+ (void)handleCoroutineExceptionContext:(id<PaymentKitKotlinCoroutineContext>)context exception:(PaymentKitKotlinThrowable *)exception __attribute__((swift_name("handleCoroutineException(context:exception:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RunnableKt")))
@interface PaymentKitRunnableKt : PaymentKitBase
+ (id<PaymentKitRunnable>)RunnableBlock:(void (^)(void))block __attribute__((swift_name("Runnable(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SupervisorKt")))
@interface PaymentKitSupervisorKt : PaymentKitBase
+ (id<PaymentKitCompletableJob>)SupervisorJobParent:(id<PaymentKitJob> _Nullable)parent __attribute__((swift_name("SupervisorJob(parent:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)supervisorScopeBlock:(id<PaymentKitKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("supervisorScope(block:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AwaitKt")))
@interface PaymentKitAwaitKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAllDeferreds:(PaymentKitKotlinArray<id<PaymentKitDeferred>> *)deferreds completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(deferreds:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAllJobs:(PaymentKitKotlinArray<id<PaymentKitJob>> *)jobs completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(jobs:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitAll:(id)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitAll(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)joinAll:(id)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("joinAll(_:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DelayKt")))
@interface PaymentKitDelayKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitCancellationWithCompletionHandler:(void (^)(PaymentKitKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitCancellation(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayTimeMillis:(int64_t)timeMillis completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(timeMillis:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)delayDuration:(int64_t)duration completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("delay(duration:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<PaymentKitFlow>)debounce:(id<PaymentKitFlow>)receiver timeoutMillis:(PaymentKitLong *(^)(id _Nullable))timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
 *   kotlin.jvm.JvmName(name="debounceDuration")
*/
+ (id<PaymentKitFlow>)debounce:(id<PaymentKitFlow>)receiver timeout:(id (^)(id _Nullable))timeout __attribute__((swift_name("debounce(_:timeout:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<PaymentKitFlow>)debounce:(id<PaymentKitFlow>)receiver timeoutMillis_:(int64_t)timeoutMillis __attribute__((swift_name("debounce(_:timeoutMillis_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<PaymentKitFlow>)debounce:(id<PaymentKitFlow>)receiver timeout_:(int64_t)timeout __attribute__((swift_name("debounce(_:timeout_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<PaymentKitFlow>)sample:(id<PaymentKitFlow>)receiver periodMillis:(int64_t)periodMillis __attribute__((swift_name("sample(_:periodMillis:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<PaymentKitFlow>)sample:(id<PaymentKitFlow>)receiver period:(int64_t)period __attribute__((swift_name("sample(_:period:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
+ (id<PaymentKitFlow>)timeout:(id<PaymentKitFlow>)receiver timeout:(int64_t)timeout __attribute__((swift_name("timeout(_:timeout:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultithreadedDispatchersKt")))
@interface PaymentKitMultithreadedDispatchersKt : PaymentKitBase
+ (PaymentKitCloseableCoroutineDispatcher *)doNewFixedThreadPoolContextNThreads:(int32_t)nThreads name:(NSString *)name __attribute__((swift_name("doNewFixedThreadPoolContext(nThreads:name:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (PaymentKitCloseableCoroutineDispatcher *)doNewSingleThreadContextName:(NSString *)name __attribute__((swift_name("doNewSingleThreadContext(name:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildersKt")))
@interface PaymentKitBuildersKt : PaymentKitBase
+ (id _Nullable)runBlockingContext:(id<PaymentKitKotlinCoroutineContext>)context block:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("runBlocking(context:block:)")));
+ (id<PaymentKitFlow>)callbackFlowBlock:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("callbackFlow(block:)")));
+ (id<PaymentKitFlow>)channelFlowBlock:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("channelFlow(block:)")));
+ (id<PaymentKitFlow>)emptyFlow __attribute__((swift_name("emptyFlow()")));
+ (id<PaymentKitFlow>)flowBlock:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("flow(block:)")));
+ (id<PaymentKitFlow>)flowOfValue:(id _Nullable)value __attribute__((swift_name("flowOf(value:)")));
+ (id<PaymentKitFlow>)flowOfElements:(PaymentKitKotlinArray<id> *)elements __attribute__((swift_name("flowOf(elements:)")));
+ (id<PaymentKitFlow>)asFlow:(id _Nullable (^)(void))receiver __attribute__((swift_name("asFlow(_:)")));
+ (id<PaymentKitFlow>)asFlow_:(id)receiver __attribute__((swift_name("asFlow(__:)")));
+ (id<PaymentKitFlow>)asFlow__:(id<PaymentKitKotlinIterator>)receiver __attribute__((swift_name("asFlow(___:)")));
+ (id<PaymentKitFlow>)asFlow___:(id<PaymentKitKotlinSequence>)receiver __attribute__((swift_name("asFlow(____:)")));
+ (id<PaymentKitFlow>)asFlow____:(id<PaymentKitKotlinSuspendFunction0>)receiver __attribute__((swift_name("asFlow(_____:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableContinuationKt")))
@interface PaymentKitCancellableContinuationKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)suspendCancellableCoroutineBlock:(void (^)(id<PaymentKitCancellableContinuation>))block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("suspendCancellableCoroutine(block:completionHandler:)")));
+ (void)disposeOnCancellation:(id<PaymentKitCancellableContinuation>)receiver handle:(id<PaymentKitDisposableHandle>)handle __attribute__((swift_name("disposeOnCancellation(_:handle:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Builders_commonKt")))
@interface PaymentKitBuilders_commonKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withContextContext:(id<PaymentKitKotlinCoroutineContext>)context block:(id<PaymentKitKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withContext(context:block:completionHandler:)")));
+ (id<PaymentKitDeferred>)async:(id<PaymentKitCoroutineScope>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context start:(PaymentKitCoroutineStart *)start block:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("async(_:context:start:block:)")));
+ (id<PaymentKitJob>)launch:(id<PaymentKitCoroutineScope>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context start:(PaymentKitCoroutineStart *)start block:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("launch(_:context:start:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeoutKt")))
@interface PaymentKitTimeoutKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeMillis:(int64_t)timeMillis block:(id<PaymentKitKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeMillis:block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutTimeout:(int64_t)timeout block:(id<PaymentKitKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeout(timeout:block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeMillis:(int64_t)timeMillis block:(id<PaymentKitKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeMillis:block:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withTimeoutOrNullTimeout:(int64_t)timeout block:(id<PaymentKitKotlinSuspendFunction1>)block completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withTimeoutOrNull(timeout:block:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("YieldKt")))
@interface PaymentKitYieldKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)yieldWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("yield(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoroutineContextKt")))
@interface PaymentKitCoroutineContextKt : PaymentKitBase
+ (id<PaymentKitKotlinCoroutineContext>)doNewCoroutineContext:(id<PaymentKitKotlinCoroutineContext>)receiver addedContext:(id<PaymentKitKotlinCoroutineContext>)addedContext __attribute__((swift_name("doNewCoroutineContext(_:addedContext:)")));
+ (id<PaymentKitKotlinCoroutineContext>)doNewCoroutineContext:(id<PaymentKitCoroutineScope>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("doNewCoroutineContext(_:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancellableKt")))
@interface PaymentKitCancellableKt : PaymentKitBase
+ (void)startCoroutineCancellable:(id<PaymentKitKotlinSuspendFunction0>)receiver completion:(id<PaymentKitKotlinContinuation>)completion __attribute__((swift_name("startCoroutineCancellable(_:completion:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastChannelKt")))
@interface PaymentKitBroadcastChannelKt : PaymentKitBase

/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
+ (id<PaymentKitBroadcastChannel>)BroadcastChannelCapacity:(int32_t)capacity __attribute__((swift_name("BroadcastChannel(capacity:)"))) __attribute__((deprecated("BroadcastChannel is deprecated in the favour of SharedFlow and StateFlow, and is no longer supported")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelKt")))
@interface PaymentKitChannelKt : PaymentKitBase
+ (id<PaymentKitChannel>)ChannelCapacity:(int32_t)capacity onBufferOverflow:(PaymentKitBufferOverflow *)onBufferOverflow onUndeliveredElement:(void (^ _Nullable)(id _Nullable))onUndeliveredElement __attribute__((swift_name("Channel(capacity:onBufferOverflow:onUndeliveredElement:)")));
+ (id _Nullable)getOrElse:(id _Nullable)receiver onFailure:(id _Nullable (^)(PaymentKitKotlinThrowable * _Nullable))onFailure __attribute__((swift_name("getOrElse(_:onFailure:)")));
+ (id _Nullable)onClosed:(id _Nullable)receiver action:(void (^)(PaymentKitKotlinThrowable * _Nullable))action __attribute__((swift_name("onClosed(_:action:)")));
+ (id _Nullable)onFailure:(id _Nullable)receiver action:(void (^)(PaymentKitKotlinThrowable * _Nullable))action __attribute__((swift_name("onFailure(_:action:)")));
+ (id _Nullable)onSuccess:(id _Nullable)receiver action:(void (^)(id _Nullable))action __attribute__((swift_name("onSuccess(_:action:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProduceKt")))
@interface PaymentKitProduceKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)awaitClose:(id<PaymentKitProducerScope>)receiver block:(void (^)(void))block completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitClose(_:block:completionHandler:)")));
+ (id<PaymentKitReceiveChannel>)produce:(id<PaymentKitCoroutineScope>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(PaymentKitCoroutineStart *)start onCompletion:(void (^ _Nullable)(PaymentKitKotlinThrowable * _Nullable))onCompletion block:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:start:onCompletion:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<PaymentKitReceiveChannel>)produce:(id<PaymentKitCoroutineScope>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context capacity:(int32_t)capacity block:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("produce(_:context:capacity:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BroadcastKt")))
@interface PaymentKitBroadcastKt : PaymentKitBase

/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
+ (id<PaymentKitBroadcastChannel>)broadcast:(id<PaymentKitCoroutineScope>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context capacity:(int32_t)capacity start:(PaymentKitCoroutineStart *)start onCompletion:(void (^ _Nullable)(PaymentKitKotlinThrowable * _Nullable))onCompletion block:(id<PaymentKitKotlinSuspendFunction1>)block __attribute__((swift_name("broadcast(_:context:capacity:start:onCompletion:block:)"))) __attribute__((deprecated("BroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));

/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
+ (id<PaymentKitBroadcastChannel>)broadcast:(id<PaymentKitReceiveChannel>)receiver capacity:(int32_t)capacity start:(PaymentKitCoroutineStart *)start __attribute__((swift_name("broadcast(_:capacity:start:)"))) __attribute__((deprecated("BroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Channels_commonKt")))
@interface PaymentKitChannels_commonKt : PaymentKitBase

/**
 * @note annotations
 *   kotlinx.coroutines.ObsoleteCoroutinesApi
*/
+ (id _Nullable)consume:(id<PaymentKitBroadcastChannel>)receiver block:(id _Nullable (^)(id<PaymentKitReceiveChannel>))block __attribute__((swift_name("consume(_:block:)"))) __attribute__((deprecated("BroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));
+ (id _Nullable)consume:(id<PaymentKitReceiveChannel>)receiver block_:(id _Nullable (^)(id<PaymentKitReceiveChannel>))block __attribute__((swift_name("consume(_:block_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<PaymentKitBroadcastChannel>)receiver action:(void (^)(id _Nullable))action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler:)"))) __attribute__((deprecated("BroadcastChannel is deprecated in the favour of SharedFlow and is no longer supported")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)consumeEach:(id<PaymentKitReceiveChannel>)receiver action:(void (^)(id _Nullable))action completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("consumeEach(_:action:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<PaymentKitReceiveChannel>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ChannelsKt")))
@interface PaymentKitChannelsKt : PaymentKitBase
+ (id _Nullable)trySendBlocking:(id<PaymentKitSendChannel>)receiver element:(id _Nullable)element __attribute__((swift_name("trySendBlocking(_:element:)")));
+ (id<PaymentKitFlow>)asFlow:(id<PaymentKitBroadcastChannel>)receiver __attribute__((swift_name("asFlow(_:)"))) __attribute__((unavailable("'BroadcastChannel' is obsolete and all corresponding operators are deprecated in the favour of StateFlow and SharedFlow")));
+ (id<PaymentKitFlow>)consumeAsFlow:(id<PaymentKitReceiveChannel>)receiver __attribute__((swift_name("consumeAsFlow(_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<PaymentKitFlowCollector>)receiver channel:(id<PaymentKitReceiveChannel>)channel completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:channel:completionHandler:)")));
+ (id<PaymentKitReceiveChannel>)produceIn:(id<PaymentKitFlow>)receiver scope:(id<PaymentKitCoroutineScope>)scope __attribute__((swift_name("produceIn(_:scope:)")));
+ (id<PaymentKitFlow>)receiveAsFlow:(id<PaymentKitReceiveChannel>)receiver __attribute__((swift_name("receiveAsFlow(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MergeKt")))
@interface PaymentKitMergeKt : PaymentKitBase
+ (id<PaymentKitFlow>)mergeFlows:(PaymentKitKotlinArray<id<PaymentKitFlow>> *)flows __attribute__((swift_name("merge(flows:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<PaymentKitFlow>)flatMapConcat:(id<PaymentKitFlow>)receiver transform:(id<PaymentKitKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapConcat(_:transform:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<PaymentKitFlow>)flatMapLatest:(id<PaymentKitFlow>)receiver transform:(id<PaymentKitKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapLatest(_:transform:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<PaymentKitFlow>)flatMapMerge:(id<PaymentKitFlow>)receiver concurrency:(int32_t)concurrency transform:(id<PaymentKitKotlinSuspendFunction1>)transform __attribute__((swift_name("flatMapMerge(_:concurrency:transform:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<PaymentKitFlow>)flattenConcat:(id<PaymentKitFlow>)receiver __attribute__((swift_name("flattenConcat(_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<PaymentKitFlow>)flattenMerge:(id<PaymentKitFlow>)receiver concurrency:(int32_t)concurrency __attribute__((swift_name("flattenMerge(_:concurrency:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<PaymentKitFlow>)mapLatest:(id<PaymentKitFlow>)receiver transform:(id<PaymentKitKotlinSuspendFunction1>)transform __attribute__((swift_name("mapLatest(_:transform:)")));
+ (id<PaymentKitFlow>)merge:(id)receiver __attribute__((swift_name("merge(_:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (id<PaymentKitFlow>)transformLatest:(id<PaymentKitFlow>)receiver transform:(id<PaymentKitKotlinSuspendFunction2>)transform __attribute__((swift_name("transformLatest(_:transform:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
@property (class, readonly) int32_t DEFAULT_CONCURRENCY __attribute__((swift_name("DEFAULT_CONCURRENCY")));

/**
 * @note annotations
 *   kotlinx.coroutines.FlowPreview
*/
@property (class, readonly) NSString *DEFAULT_CONCURRENCY_PROPERTY_NAME __attribute__((swift_name("DEFAULT_CONCURRENCY_PROPERTY_NAME")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LintKt")))
@interface PaymentKitLintKt : PaymentKitBase
+ (id<PaymentKitKotlinCoroutineContext>)coroutineContext:(id<PaymentKitFlowCollector>)receiver __attribute__((swift_name("coroutineContext(_:)"))) __attribute__((unavailable("coroutineContext is resolved into the property of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext() instead or specify the receiver of coroutineContext explicitly")));
+ (BOOL)isActive:(id<PaymentKitFlowCollector>)receiver __attribute__((swift_name("isActive(_:)"))) __attribute__((unavailable("isActive is resolved into the extension of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext().isActive or cancellable() operator instead or specify the receiver of isActive explicitly. Additionally, flow {} builder emissions are cancellable by default.")));
+ (void)cancel:(id<PaymentKitFlowCollector>)receiver cause:(PaymentKitKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(_:cause:)"))) __attribute__((unavailable("cancel() is resolved into the extension of outer CoroutineScope which is likely to be an error.Use currentCoroutineContext().cancel() instead or specify the receiver of cancel() explicitly")));
+ (id<PaymentKitFlow>)cancellable:(id<PaymentKitSharedFlow>)receiver __attribute__((swift_name("cancellable(_:)"))) __attribute__((unavailable("Applying 'cancellable' to a SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<PaymentKitFlow>)catch:(id<PaymentKitSharedFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator typically has not effect, it can only catch exceptions from 'onSubscribe' operator")));
+ (id<PaymentKitFlow>)conflate:(id<PaymentKitStateFlow>)receiver __attribute__((swift_name("conflate(_:)"))) __attribute__((unavailable("Applying 'conflate' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<PaymentKitSharedFlow>)receiver completionHandler:(void (^)(PaymentKitInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));
+ (id<PaymentKitFlow>)distinctUntilChanged:(id<PaymentKitStateFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)"))) __attribute__((unavailable("Applying 'distinctUntilChanged' to StateFlow has no effect. See the StateFlow documentation on Operator Fusion.")));
+ (id<PaymentKitFlow>)flowOn:(id<PaymentKitSharedFlow>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)"))) __attribute__((unavailable("Applying 'flowOn' to SharedFlow has no effect. See the SharedFlow documentation on Operator Fusion.")));
+ (id<PaymentKitFlow>)retry:(id<PaymentKitSharedFlow>)receiver retries:(int64_t)retries predicate:(id<PaymentKitKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));
+ (id<PaymentKitFlow>)retryWhen:(id<PaymentKitSharedFlow>)receiver predicate:(id<PaymentKitKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)"))) __attribute__((deprecated("SharedFlow never completes, so this operator has no effect.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<PaymentKitSharedFlow>)receiver completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<PaymentKitSharedFlow>)receiver destination:(NSMutableArray<id> *)destination completionHandler:(void (^)(PaymentKitKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:destination:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<PaymentKitSharedFlow>)receiver completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:completionHandler:)"))) __attribute__((deprecated("SharedFlow never completes, so this terminal operation never completes.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<PaymentKitSharedFlow>)receiver destination:(PaymentKitMutableSet<id> *)destination completionHandler:(void (^)(PaymentKitKotlinNothing * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:destination:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedFlowKt")))
@interface PaymentKitSharedFlowKt : PaymentKitBase
+ (id<PaymentKitMutableSharedFlow>)MutableSharedFlowReplay:(int32_t)replay extraBufferCapacity:(int32_t)extraBufferCapacity onBufferOverflow:(PaymentKitBufferOverflow *)onBufferOverflow __attribute__((swift_name("MutableSharedFlow(replay:extraBufferCapacity:onBufferOverflow:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StateFlowKt")))
@interface PaymentKitStateFlowKt : PaymentKitBase
+ (id<PaymentKitMutableStateFlow>)MutableStateFlowValue:(id _Nullable)value __attribute__((swift_name("MutableStateFlow(value:)")));
+ (id _Nullable)getAndUpdate:(id<PaymentKitMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("getAndUpdate(_:function:)")));
+ (void)update:(id<PaymentKitMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("update(_:function:)")));
+ (id _Nullable)updateAndGet:(id<PaymentKitMutableStateFlow>)receiver function:(id _Nullable (^)(id _Nullable))function __attribute__((swift_name("updateAndGet(_:function:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZipKt")))
@interface PaymentKitZipKt : PaymentKitBase
+ (id<PaymentKitFlow>)combineFlows:(PaymentKitKotlinArray<id<PaymentKitFlow>> *)flows transform:(id<PaymentKitKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform:)")));
+ (id<PaymentKitFlow>)combineFlows:(id)flows transform_:(id<PaymentKitKotlinSuspendFunction1>)transform __attribute__((swift_name("combine(flows:transform_:)")));
+ (id<PaymentKitFlow>)combineFlow:(id<PaymentKitFlow>)flow flow2:(id<PaymentKitFlow>)flow2 flow3:(id<PaymentKitFlow>)flow3 flow4:(id<PaymentKitFlow>)flow4 flow5:(id<PaymentKitFlow>)flow5 transform:(id<PaymentKitKotlinSuspendFunction5>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<PaymentKitFlow>)combineFlow:(id<PaymentKitFlow>)flow flow2:(id<PaymentKitFlow>)flow2 flow3:(id<PaymentKitFlow>)flow3 flow4:(id<PaymentKitFlow>)flow4 transform:(id<PaymentKitKotlinSuspendFunction4>)transform __attribute__((swift_name("combine(flow:flow2:flow3:flow4:transform:)")));
+ (id<PaymentKitFlow>)combineFlow:(id<PaymentKitFlow>)flow flow2:(id<PaymentKitFlow>)flow2 flow3:(id<PaymentKitFlow>)flow3 transform:(id<PaymentKitKotlinSuspendFunction3>)transform __attribute__((swift_name("combine(flow:flow2:flow3:transform:)")));
+ (id<PaymentKitFlow>)combineFlow:(id<PaymentKitFlow>)flow flow2:(id<PaymentKitFlow>)flow2 transform:(id<PaymentKitKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(flow:flow2:transform:)")));
+ (id<PaymentKitFlow>)combineTransformFlows:(PaymentKitKotlinArray<id<PaymentKitFlow>> *)flows transform:(id<PaymentKitKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform:)")));
+ (id<PaymentKitFlow>)combineTransformFlows:(id)flows transform_:(id<PaymentKitKotlinSuspendFunction2>)transform __attribute__((swift_name("combineTransform(flows:transform_:)")));
+ (id<PaymentKitFlow>)combineTransformFlow:(id<PaymentKitFlow>)flow flow2:(id<PaymentKitFlow>)flow2 flow3:(id<PaymentKitFlow>)flow3 flow4:(id<PaymentKitFlow>)flow4 flow5:(id<PaymentKitFlow>)flow5 transform:(id<PaymentKitKotlinSuspendFunction6>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:flow5:transform:)")));
+ (id<PaymentKitFlow>)combineTransformFlow:(id<PaymentKitFlow>)flow flow2:(id<PaymentKitFlow>)flow2 flow3:(id<PaymentKitFlow>)flow3 flow4:(id<PaymentKitFlow>)flow4 transform:(id<PaymentKitKotlinSuspendFunction5>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:flow4:transform:)")));
+ (id<PaymentKitFlow>)combineTransformFlow:(id<PaymentKitFlow>)flow flow2:(id<PaymentKitFlow>)flow2 flow3:(id<PaymentKitFlow>)flow3 transform:(id<PaymentKitKotlinSuspendFunction4>)transform __attribute__((swift_name("combineTransform(flow:flow2:flow3:transform:)")));
+ (id<PaymentKitFlow>)combineTransformFlow:(id<PaymentKitFlow>)flow flow2:(id<PaymentKitFlow>)flow2 transform:(id<PaymentKitKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(flow:flow2:transform:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="flowCombine")
*/
+ (id<PaymentKitFlow>)combine:(id<PaymentKitFlow>)receiver flow:(id<PaymentKitFlow>)flow transform:(id<PaymentKitKotlinSuspendFunction2>)transform __attribute__((swift_name("combine(_:flow:transform:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmName(name="flowCombineTransform")
*/
+ (id<PaymentKitFlow>)combineTransform:(id<PaymentKitFlow>)receiver flow:(id<PaymentKitFlow>)flow transform:(id<PaymentKitKotlinSuspendFunction3>)transform __attribute__((swift_name("combineTransform(_:flow:transform:)")));
+ (id<PaymentKitFlow>)zip:(id<PaymentKitFlow>)receiver other:(id<PaymentKitFlow>)other transform:(id<PaymentKitKotlinSuspendFunction2>)transform __attribute__((swift_name("zip(_:other:transform:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ShareKt")))
@interface PaymentKitShareKt : PaymentKitBase
+ (id<PaymentKitSharedFlow>)asSharedFlow:(id<PaymentKitMutableSharedFlow>)receiver __attribute__((swift_name("asSharedFlow(_:)")));
+ (id<PaymentKitStateFlow>)asStateFlow:(id<PaymentKitMutableStateFlow>)receiver __attribute__((swift_name("asStateFlow(_:)")));
+ (id<PaymentKitSharedFlow>)onSubscription:(id<PaymentKitSharedFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction1>)action __attribute__((swift_name("onSubscription(_:action:)")));
+ (id<PaymentKitSharedFlow>)shareIn:(id<PaymentKitFlow>)receiver scope:(id<PaymentKitCoroutineScope>)scope started:(id<PaymentKitSharingStarted>)started replay:(int32_t)replay __attribute__((swift_name("shareIn(_:scope:started:replay:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)stateIn:(id<PaymentKitFlow>)receiver scope:(id<PaymentKitCoroutineScope>)scope completionHandler:(void (^)(id<PaymentKitStateFlow> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("stateIn(_:scope:completionHandler:)")));
+ (id<PaymentKitStateFlow>)stateIn:(id<PaymentKitFlow>)receiver scope:(id<PaymentKitCoroutineScope>)scope started:(id<PaymentKitSharingStarted>)started initialValue:(id _Nullable)initialValue __attribute__((swift_name("stateIn(_:scope:started:initialValue:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ContextKt")))
@interface PaymentKitContextKt : PaymentKitBase
+ (id<PaymentKitFlow>)buffer:(id<PaymentKitFlow>)receiver capacity:(int32_t)capacity onBufferOverflow:(PaymentKitBufferOverflow *)onBufferOverflow __attribute__((swift_name("buffer(_:capacity:onBufferOverflow:)")));
+ (id<PaymentKitFlow>)cancellable:(id<PaymentKitFlow>)receiver __attribute__((swift_name("cancellable(_:)")));
+ (id<PaymentKitFlow>)conflate:(id<PaymentKitFlow>)receiver __attribute__((swift_name("conflate(_:)")));
+ (id<PaymentKitFlow>)flowOn:(id<PaymentKitFlow>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("flowOn(_:context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MigrationKt")))
@interface PaymentKitMigrationKt : PaymentKitBase
+ (id<PaymentKitFlow>)cache:(id<PaymentKitFlow>)receiver __attribute__((swift_name("cache(_:)"))) __attribute__((unavailable("Flow analogue of 'cache()' is 'shareIn' with unlimited replay and 'started = SharingStared.Lazily' argument'")));
+ (id<PaymentKitFlow>)combineLatest:(id<PaymentKitFlow>)receiver other:(id<PaymentKitFlow>)other other2:(id<PaymentKitFlow>)other2 other3:(id<PaymentKitFlow>)other3 other4:(id<PaymentKitFlow>)other4 transform:(id<PaymentKitKotlinSuspendFunction5>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:other4:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<PaymentKitFlow>)combineLatest:(id<PaymentKitFlow>)receiver other:(id<PaymentKitFlow>)other other2:(id<PaymentKitFlow>)other2 other3:(id<PaymentKitFlow>)other3 transform:(id<PaymentKitKotlinSuspendFunction4>)transform __attribute__((swift_name("combineLatest(_:other:other2:other3:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<PaymentKitFlow>)combineLatest:(id<PaymentKitFlow>)receiver other:(id<PaymentKitFlow>)other other2:(id<PaymentKitFlow>)other2 transform:(id<PaymentKitKotlinSuspendFunction3>)transform __attribute__((swift_name("combineLatest(_:other:other2:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<PaymentKitFlow>)combineLatest:(id<PaymentKitFlow>)receiver other:(id<PaymentKitFlow>)other transform:(id<PaymentKitKotlinSuspendFunction2>)transform __attribute__((swift_name("combineLatest(_:other:transform:)"))) __attribute__((unavailable("Flow analogue of 'combineLatest' is 'combine'")));
+ (id<PaymentKitFlow>)compose:(id<PaymentKitFlow>)receiver transformer:(id<PaymentKitFlow> (^)(id<PaymentKitFlow>))transformer __attribute__((swift_name("compose(_:transformer:)"))) __attribute__((unavailable("Flow analogue of 'compose' is 'let'")));
+ (id<PaymentKitFlow>)concatMap:(id<PaymentKitFlow>)receiver mapper:(id<PaymentKitFlow> (^)(id _Nullable))mapper __attribute__((swift_name("concatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue of 'concatMap' is 'flatMapConcat'")));
+ (id<PaymentKitFlow>)concatWith:(id<PaymentKitFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("concatWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { emit(value) }'")));
+ (id<PaymentKitFlow>)concatWith:(id<PaymentKitFlow>)receiver other:(id<PaymentKitFlow>)other __attribute__((swift_name("concatWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'concatWith' is 'onCompletion'. Use 'onCompletion { if (it == null) emitAll(other) }'")));
+ (id<PaymentKitFlow>)delayEach:(id<PaymentKitFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayEach(_:timeMillis:)"))) __attribute__((unavailable("Use 'onEach { delay(timeMillis) }'")));
+ (id<PaymentKitFlow>)delayFlow:(id<PaymentKitFlow>)receiver timeMillis:(int64_t)timeMillis __attribute__((swift_name("delayFlow(_:timeMillis:)"))) __attribute__((unavailable("Use 'onStart { delay(timeMillis) }'")));
+ (id<PaymentKitFlow>)flatMap:(id<PaymentKitFlow>)receiver mapper:(id<PaymentKitKotlinSuspendFunction1>)mapper __attribute__((swift_name("flatMap(_:mapper:)"))) __attribute__((unavailable("Flow analogue is 'flatMapConcat'")));
+ (id<PaymentKitFlow>)flatten:(id<PaymentKitFlow>)receiver __attribute__((swift_name("flatten(_:)"))) __attribute__((unavailable("Flow analogue of 'flatten' is 'flattenConcat'")));
+ (void)forEach:(id<PaymentKitFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction1>)action __attribute__((swift_name("forEach(_:action:)"))) __attribute__((unavailable("Flow analogue of 'forEach' is 'collect'")));
+ (id<PaymentKitFlow>)merge:(id<PaymentKitFlow>)receiver __attribute__((swift_name("merge(_:)"))) __attribute__((unavailable("Flow analogue of 'merge' is 'flattenConcat'")));
+ (id<PaymentKitFlow>)observeOn:(id<PaymentKitFlow>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("observeOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<PaymentKitFlow>)onErrorResume:(id<PaymentKitFlow>)receiver fallback:(id<PaymentKitFlow>)fallback __attribute__((swift_name("onErrorResume(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<PaymentKitFlow>)onErrorResumeNext:(id<PaymentKitFlow>)receiver fallback:(id<PaymentKitFlow>)fallback __attribute__((swift_name("onErrorResumeNext(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emitAll(fallback) }'")));
+ (id<PaymentKitFlow>)onErrorReturn:(id<PaymentKitFlow>)receiver fallback:(id _Nullable)fallback __attribute__((swift_name("onErrorReturn(_:fallback:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { emit(fallback) }'")));
+ (id<PaymentKitFlow>)onErrorReturn:(id<PaymentKitFlow>)receiver fallback:(id _Nullable)fallback predicate:(PaymentKitBoolean *(^)(PaymentKitKotlinThrowable *))predicate __attribute__((swift_name("onErrorReturn(_:fallback:predicate:)"))) __attribute__((unavailable("Flow analogue of 'onErrorXxx' is 'catch'. Use 'catch { e -> if (predicate(e)) emit(fallback) else throw e }'")));
+ (id<PaymentKitFlow>)publish:(id<PaymentKitFlow>)receiver __attribute__((swift_name("publish(_:)"))) __attribute__((unavailable("Flow analogue of 'publish()' is 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStared.Lazily' argument, \npublish().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<PaymentKitFlow>)publish:(id<PaymentKitFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("publish(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'publish(bufferSize)' is 'buffer' followed by 'shareIn'. \npublish().connect() is the default strategy (no extra call is needed), \npublish().autoConnect() translates to 'started = SharingStared.Lazily' argument, \npublish().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<PaymentKitFlow>)publishOn:(id<PaymentKitFlow>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("publishOn(_:context:)"))) __attribute__((unavailable("Collect flow in the desired context instead")));
+ (id<PaymentKitFlow>)replay:(id<PaymentKitFlow>)receiver __attribute__((swift_name("replay(_:)"))) __attribute__((unavailable("Flow analogue of 'replay()' is 'shareIn' with unlimited replay. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStared.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<PaymentKitFlow>)replay:(id<PaymentKitFlow>)receiver bufferSize:(int32_t)bufferSize __attribute__((swift_name("replay(_:bufferSize:)"))) __attribute__((unavailable("Flow analogue of 'replay(bufferSize)' is 'shareIn' with the specified replay parameter. \nreplay().connect() is the default strategy (no extra call is needed), \nreplay().autoConnect() translates to 'started = SharingStared.Lazily' argument, \nreplay().refCount() translates to 'started = SharingStared.WhileSubscribed()' argument.")));
+ (id<PaymentKitFlow>)scanFold:(id<PaymentKitFlow>)receiver initial:(id _Nullable)initial operation:(id<PaymentKitKotlinSuspendFunction2>)operation __attribute__((swift_name("scanFold(_:initial:operation:)"))) __attribute__((unavailable("Flow has less verbose 'scan' shortcut")));
+ (id<PaymentKitFlow>)scanReduce:(id<PaymentKitFlow>)receiver operation:(id<PaymentKitKotlinSuspendFunction2>)operation __attribute__((swift_name("scanReduce(_:operation:)"))) __attribute__((unavailable("'scanReduce' was renamed to 'runningReduce' to be consistent with Kotlin standard library")));
+ (id<PaymentKitFlow>)skip:(id<PaymentKitFlow>)receiver count:(int32_t)count __attribute__((swift_name("skip(_:count:)"))) __attribute__((unavailable("Flow analogue of 'skip' is 'drop'")));
+ (id<PaymentKitFlow>)startWith:(id<PaymentKitFlow>)receiver value:(id _Nullable)value __attribute__((swift_name("startWith(_:value:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emit(value) }'")));
+ (id<PaymentKitFlow>)startWith:(id<PaymentKitFlow>)receiver other:(id<PaymentKitFlow>)other __attribute__((swift_name("startWith(_:other:)"))) __attribute__((unavailable("Flow analogue of 'startWith' is 'onStart'. Use 'onStart { emitAll(other) }'")));
+ (void)subscribe:(id<PaymentKitFlow>)receiver __attribute__((swift_name("subscribe(_:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<PaymentKitFlow>)receiver onEach:(id<PaymentKitKotlinSuspendFunction1>)onEach __attribute__((swift_name("subscribe(_:onEach:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (void)subscribe:(id<PaymentKitFlow>)receiver onEach:(id<PaymentKitKotlinSuspendFunction1>)onEach onError:(id<PaymentKitKotlinSuspendFunction1>)onError __attribute__((swift_name("subscribe(_:onEach:onError:)"))) __attribute__((unavailable("Use 'launchIn' with 'onEach', 'onCompletion' and 'catch' instead")));
+ (id<PaymentKitFlow>)subscribeOn:(id<PaymentKitFlow>)receiver context:(id<PaymentKitKotlinCoroutineContext>)context __attribute__((swift_name("subscribeOn(_:context:)"))) __attribute__((unavailable("Use 'flowOn' instead")));
+ (id<PaymentKitFlow>)switchMap:(id<PaymentKitFlow>)receiver transform:(id<PaymentKitKotlinSuspendFunction1>)transform __attribute__((swift_name("switchMap(_:transform:)"))) __attribute__((unavailable("Flow analogues of 'switchMap' are 'transformLatest', 'flatMapLatest' and 'mapLatest'")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorsKt")))
@interface PaymentKitErrorsKt : PaymentKitBase
+ (id<PaymentKitFlow>)catch:(id<PaymentKitFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction2>)action __attribute__((swift_name("catch(_:action:)")));
+ (id<PaymentKitFlow>)retry:(id<PaymentKitFlow>)receiver retries:(int64_t)retries predicate:(id<PaymentKitKotlinSuspendFunction1>)predicate __attribute__((swift_name("retry(_:retries:predicate:)")));
+ (id<PaymentKitFlow>)retryWhen:(id<PaymentKitFlow>)receiver predicate:(id<PaymentKitKotlinSuspendFunction3>)predicate __attribute__((swift_name("retryWhen(_:predicate:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectKt")))
@interface PaymentKitCollectKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collect:(id<PaymentKitFlow>)receiver completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectIndexed:(id<PaymentKitFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction2>)action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectIndexed(_:action:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)collectLatest:(id<PaymentKitFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction1>)action completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collectLatest(_:action:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)emitAll:(id<PaymentKitFlowCollector>)receiver flow:(id<PaymentKitFlow>)flow completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emitAll(_:flow:completionHandler:)")));
+ (id<PaymentKitJob>)launchIn:(id<PaymentKitFlow>)receiver scope:(id<PaymentKitCoroutineScope>)scope __attribute__((swift_name("launchIn(_:scope:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CountKt")))
@interface PaymentKitCountKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<PaymentKitFlow>)receiver completionHandler:(void (^)(PaymentKitInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)count:(id<PaymentKitFlow>)receiver predicate:(id<PaymentKitKotlinSuspendFunction1>)predicate completionHandler:(void (^)(PaymentKitInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("count(_:predicate:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DistinctKt")))
@interface PaymentKitDistinctKt : PaymentKitBase
+ (id<PaymentKitFlow>)distinctUntilChanged:(id<PaymentKitFlow>)receiver __attribute__((swift_name("distinctUntilChanged(_:)")));
+ (id<PaymentKitFlow>)distinctUntilChanged:(id<PaymentKitFlow>)receiver areEquivalent:(PaymentKitBoolean *(^)(id _Nullable, id _Nullable))areEquivalent __attribute__((swift_name("distinctUntilChanged(_:areEquivalent:)")));
+ (id<PaymentKitFlow>)distinctUntilChangedBy:(id<PaymentKitFlow>)receiver keySelector:(id _Nullable (^)(id _Nullable))keySelector __attribute__((swift_name("distinctUntilChangedBy(_:keySelector:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LimitKt")))
@interface PaymentKitLimitKt : PaymentKitBase
+ (id<PaymentKitFlow>)drop:(id<PaymentKitFlow>)receiver count:(int32_t)count __attribute__((swift_name("drop(_:count:)")));
+ (id<PaymentKitFlow>)dropWhile:(id<PaymentKitFlow>)receiver predicate:(id<PaymentKitKotlinSuspendFunction1>)predicate __attribute__((swift_name("dropWhile(_:predicate:)")));
+ (id<PaymentKitFlow>)take:(id<PaymentKitFlow>)receiver count:(int32_t)count __attribute__((swift_name("take(_:count:)")));
+ (id<PaymentKitFlow>)takeWhile:(id<PaymentKitFlow>)receiver predicate:(id<PaymentKitKotlinSuspendFunction1>)predicate __attribute__((swift_name("takeWhile(_:predicate:)")));
+ (id<PaymentKitFlow>)transformWhile:(id<PaymentKitFlow>)receiver transform:(id<PaymentKitKotlinSuspendFunction2>)transform __attribute__((swift_name("transformWhile(_:transform:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransformKt")))
@interface PaymentKitTransformKt : PaymentKitBase
+ (id<PaymentKitFlow>)filter:(id<PaymentKitFlow>)receiver predicate:(id<PaymentKitKotlinSuspendFunction1>)predicate __attribute__((swift_name("filter(_:predicate:)")));
+ (id<PaymentKitFlow>)filterIsInstance:(id<PaymentKitFlow>)receiver __attribute__((swift_name("filterIsInstance(_:)")));
+ (id<PaymentKitFlow>)filterIsInstance:(id<PaymentKitFlow>)receiver klass:(id<PaymentKitKotlinKClass>)klass __attribute__((swift_name("filterIsInstance(_:klass:)")));
+ (id<PaymentKitFlow>)filterNot:(id<PaymentKitFlow>)receiver predicate:(id<PaymentKitKotlinSuspendFunction1>)predicate __attribute__((swift_name("filterNot(_:predicate:)")));
+ (id<PaymentKitFlow>)filterNotNull:(id<PaymentKitFlow>)receiver __attribute__((swift_name("filterNotNull(_:)")));
+ (id<PaymentKitFlow>)map:(id<PaymentKitFlow>)receiver transform:(id<PaymentKitKotlinSuspendFunction1>)transform __attribute__((swift_name("map(_:transform:)")));
+ (id<PaymentKitFlow>)mapNotNull:(id<PaymentKitFlow>)receiver transform:(id<PaymentKitKotlinSuspendFunction1>)transform __attribute__((swift_name("mapNotNull(_:transform:)")));
+ (id<PaymentKitFlow>)onEach:(id<PaymentKitFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction1>)action __attribute__((swift_name("onEach(_:action:)")));
+ (id<PaymentKitFlow>)runningFold:(id<PaymentKitFlow>)receiver initial:(id _Nullable)initial operation:(id<PaymentKitKotlinSuspendFunction2>)operation __attribute__((swift_name("runningFold(_:initial:operation:)")));
+ (id<PaymentKitFlow>)runningReduce:(id<PaymentKitFlow>)receiver operation:(id<PaymentKitKotlinSuspendFunction2>)operation __attribute__((swift_name("runningReduce(_:operation:)")));
+ (id<PaymentKitFlow>)scan:(id<PaymentKitFlow>)receiver initial:(id _Nullable)initial operation:(id<PaymentKitKotlinSuspendFunction2>)operation __attribute__((swift_name("scan(_:initial:operation:)")));
+ (id<PaymentKitFlow>)withIndex:(id<PaymentKitFlow>)receiver __attribute__((swift_name("withIndex(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReduceKt")))
@interface PaymentKitReduceKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<PaymentKitFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)first:(id<PaymentKitFlow>)receiver predicate:(id<PaymentKitKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("first(_:predicate:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<PaymentKitFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)firstOrNull:(id<PaymentKitFlow>)receiver predicate:(id<PaymentKitKotlinSuspendFunction1>)predicate completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("firstOrNull(_:predicate:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)fold:(id<PaymentKitFlow>)receiver initial:(id _Nullable)initial operation:(id<PaymentKitKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("fold(_:initial:operation:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)last:(id<PaymentKitFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("last(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)lastOrNull:(id<PaymentKitFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("lastOrNull(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)reduce:(id<PaymentKitFlow>)receiver operation:(id<PaymentKitKotlinSuspendFunction2>)operation completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("reduce(_:operation:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)single:(id<PaymentKitFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("single(_:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)singleOrNull:(id<PaymentKitFlow>)receiver completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("singleOrNull(_:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmittersKt")))
@interface PaymentKitEmittersKt : PaymentKitBase
+ (id<PaymentKitFlow>)onCompletion:(id<PaymentKitFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction2>)action __attribute__((swift_name("onCompletion(_:action:)")));
+ (id<PaymentKitFlow>)onEmpty:(id<PaymentKitFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction1>)action __attribute__((swift_name("onEmpty(_:action:)")));
+ (id<PaymentKitFlow>)onStart:(id<PaymentKitFlow>)receiver action:(id<PaymentKitKotlinSuspendFunction1>)action __attribute__((swift_name("onStart(_:action:)")));
+ (id<PaymentKitFlow>)transform:(id<PaymentKitFlow>)receiver transform:(id<PaymentKitKotlinSuspendFunction2>)transform __attribute__((swift_name("transform(_:transform:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CollectionKt")))
@interface PaymentKitCollectionKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toCollection:(id<PaymentKitFlow>)receiver destination:(id)destination completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toCollection(_:destination:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toList:(id<PaymentKitFlow>)receiver destination:(NSMutableArray<id> *)destination completionHandler:(void (^)(NSArray<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toList(_:destination:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)toSet:(id<PaymentKitFlow>)receiver destination:(PaymentKitMutableSet<id> *)destination completionHandler:(void (^)(NSSet<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("toSet(_:destination:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectKt")))
@interface PaymentKitSelectKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectBuilder:(void (^)(id<PaymentKitSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("select(builder:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SelectUnbiasedKt")))
@interface PaymentKitSelectUnbiasedKt : PaymentKitBase

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)selectUnbiasedBuilder:(void (^)(id<PaymentKitSelectBuilder>))builder completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("selectUnbiased(builder:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WhileSelectKt")))
@interface PaymentKitWhileSelectKt : PaymentKitBase

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)whileSelectBuilder:(void (^)(id<PaymentKitSelectBuilder>))builder completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("whileSelect(builder:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OnTimeoutKt")))
@interface PaymentKitOnTimeoutKt : PaymentKitBase

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (void)onTimeout:(id<PaymentKitSelectBuilder>)receiver timeMillis:(int64_t)timeMillis block:(id<PaymentKitKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(_:timeMillis:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
+ (void)onTimeout:(id<PaymentKitSelectBuilder>)receiver timeout:(int64_t)timeout block:(id<PaymentKitKotlinSuspendFunction0>)block __attribute__((swift_name("onTimeout(_:timeout:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Synchronized_commonKt")))
@interface PaymentKitSynchronized_commonKt : PaymentKitBase
+ (id _Nullable)synchronizedLock:(PaymentKitAtomicfuSynchronizedObject *)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("synchronized(lock:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SynchronizedKt")))
@interface PaymentKitSynchronizedKt : PaymentKitBase
+ (id _Nullable)synchronizedImplLock:(PaymentKitAtomicfuSynchronizedObject *)lock block:(id _Nullable (^)(void))block __attribute__((swift_name("synchronizedImpl(lock:block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DispatchedContinuationKt")))
@interface PaymentKitDispatchedContinuationKt : PaymentKitBase
+ (void)resumeCancellableWith:(id<PaymentKitKotlinContinuation>)receiver result:(id _Nullable)result onCancellation:(void (^ _Nullable)(PaymentKitKotlinThrowable *))onCancellation __attribute__((swift_name("resumeCancellableWith(_:result:onCancellation:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MutexKt")))
@interface PaymentKitMutexKt : PaymentKitBase
+ (id<PaymentKitMutex>)MutexLocked:(BOOL)locked __attribute__((swift_name("Mutex(locked:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withLock:(id<PaymentKitMutex>)receiver owner:(id _Nullable)owner action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withLock(_:owner:action:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SemaphoreKt")))
@interface PaymentKitSemaphoreKt : PaymentKitBase
+ (id<PaymentKitSemaphore>)SemaphorePermits:(int32_t)permits acquiredPermits:(int32_t)acquiredPermits __attribute__((swift_name("Semaphore(permits:acquiredPermits:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
+ (void)withPermit:(id<PaymentKitSemaphore>)receiver action:(id _Nullable (^)(void))action completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("withPermit(_:action:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform_iosKt")))
@interface PaymentKitPlatform_iosKt : PaymentKitBase
+ (id<PaymentKitPlatform>)getPlatform __attribute__((swift_name("getPlatform()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol PaymentKitKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol PaymentKitKtor_client_coreHttpClientEngine <PaymentKitCoroutineScope, PaymentKitKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(PaymentKitKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(PaymentKitKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(PaymentKitKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) PaymentKitKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) PaymentKitCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<PaymentKitKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface PaymentKitKtor_client_coreHttpClient : PaymentKitBase <PaymentKitCoroutineScope, PaymentKitKtor_ioCloseable>
- (instancetype)initWithEngine:(id<PaymentKitKtor_client_coreHttpClientEngine>)engine userConfig:(PaymentKitKtor_client_coreHttpClientConfig<PaymentKitKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (PaymentKitKtor_client_coreHttpClient *)configBlock:(void (^)(PaymentKitKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<PaymentKitKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PaymentKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<PaymentKitKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<PaymentKitKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) PaymentKitKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) PaymentKitKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) PaymentKitKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) PaymentKitKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) PaymentKitKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) PaymentKitKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreModule")))
@interface PaymentKitKoin_coreModule : PaymentKitBase
- (instancetype)initWith_createdAtStart:(BOOL)_createdAtStart __attribute__((swift_name("init(_createdAtStart:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (PaymentKitKotlinPair<PaymentKitKoin_coreModule *, PaymentKitKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PaymentKitKoin_coreScope *, PaymentKitKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (void)includesModule:(PaymentKitKotlinArray<PaymentKitKoin_coreModule *> *)module __attribute__((swift_name("includes(module:)")));
- (void)includesModule_:(NSArray<PaymentKitKoin_coreModule *> *)module __attribute__((swift_name("includes(module_:)")));
- (NSArray<PaymentKitKoin_coreModule *> *)plusModules:(NSArray<PaymentKitKoin_coreModule *> *)modules __attribute__((swift_name("plus(modules:)")));
- (NSArray<PaymentKitKoin_coreModule *> *)plusModule:(PaymentKitKoin_coreModule *)module __attribute__((swift_name("plus(module:)")));
- (void)scopeQualifier:(id<PaymentKitKoin_coreQualifier>)qualifier scopeSet:(void (^)(PaymentKitKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(qualifier:scopeSet:)")));
- (void)scopeScopeSet:(void (^)(PaymentKitKoin_coreScopeDSL *))scopeSet __attribute__((swift_name("scope(scopeSet:)")));
- (PaymentKitKotlinPair<PaymentKitKoin_coreModule *, PaymentKitKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier createdAtStart:(BOOL)createdAtStart definition:(id _Nullable (^)(PaymentKitKoin_coreScope *, PaymentKitKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:createdAtStart:definition:)")));
@property (readonly) PaymentKitMutableSet<PaymentKitKoin_coreSingleInstanceFactory<id> *> *eagerInstances __attribute__((swift_name("eagerInstances")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isLoaded __attribute__((swift_name("isLoaded")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction_dataSessionCache")))
@interface PaymentKitTransaction_dataSessionCache : PaymentKitBase
- (instancetype)initWithDataStore:(PaymentKitEncryptedStore *)dataStore __attribute__((swift_name("init(dataStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitTransaction_dataSessionCacheCompanion *companion __attribute__((swift_name("companion")));
- (id<PaymentKitFlow>)getSessionId __attribute__((swift_name("getSessionId()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveSessionIdSessionId:(NSString *)sessionId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("saveSessionId(sessionId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_dataRawIdCache")))
@interface PaymentKitUser_dataRawIdCache : PaymentKitBase
- (instancetype)initWithDataStore:(PaymentKitEncryptedStore *)dataStore __attribute__((swift_name("init(dataStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitUser_dataRawIdCacheCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)getRawId __attribute__((swift_name("getRawId()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveRawIdRawId:(NSString *)rawId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("saveRawId(rawId:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_dataPhoneNumberCache")))
@interface PaymentKitUser_dataPhoneNumberCache : PaymentKitBase
- (instancetype)initWithDataStore:(PaymentKitEncryptedStore *)dataStore __attribute__((swift_name("init(dataStore:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitUser_dataPhoneNumberCacheCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)getPhoneNumber __attribute__((swift_name("getPhoneNumber()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)savePhoneNumberPhoneNumber:(NSString *)phoneNumber completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("savePhoneNumber(phoneNumber:completionHandler:)")));
@end

__attribute__((swift_name("Multiplatform_settingsSettings")))
@protocol PaymentKitMultiplatform_settingsSettings
@required
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBoolean(key:defaultValue:)")));
- (PaymentKitBoolean * _Nullable)getBooleanOrNullKey:(NSString *)key __attribute__((swift_name("getBooleanOrNull(key:)")));
- (double)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDouble(key:defaultValue:)")));
- (PaymentKitDouble * _Nullable)getDoubleOrNullKey:(NSString *)key __attribute__((swift_name("getDoubleOrNull(key:)")));
- (float)getFloatKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloat(key:defaultValue:)")));
- (PaymentKitFloat * _Nullable)getFloatOrNullKey:(NSString *)key __attribute__((swift_name("getFloatOrNull(key:)")));
- (int32_t)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getInt(key:defaultValue:)")));
- (PaymentKitInt * _Nullable)getIntOrNullKey:(NSString *)key __attribute__((swift_name("getIntOrNull(key:)")));
- (int64_t)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLong(key:defaultValue:)")));
- (PaymentKitLong * _Nullable)getLongOrNullKey:(NSString *)key __attribute__((swift_name("getLongOrNull(key:)")));
- (NSString *)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getString(key:defaultValue:)")));
- (NSString * _Nullable)getStringOrNullKey:(NSString *)key __attribute__((swift_name("getStringOrNull(key:)")));
- (BOOL)hasKeyKey:(NSString *)key __attribute__((swift_name("hasKey(key:)")));
- (void)putBooleanKey:(NSString *)key value:(BOOL)value __attribute__((swift_name("putBoolean(key:value:)")));
- (void)putDoubleKey:(NSString *)key value:(double)value __attribute__((swift_name("putDouble(key:value:)")));
- (void)putFloatKey:(NSString *)key value:(float)value __attribute__((swift_name("putFloat(key:value:)")));
- (void)putIntKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("putInt(key:value:)")));
- (void)putLongKey:(NSString *)key value:(int64_t)value __attribute__((swift_name("putLong(key:value:)")));
- (void)putStringKey:(NSString *)key value:(NSString *)value __attribute__((swift_name("putString(key:value:)")));
- (void)removeKey:(NSString *)key __attribute__((swift_name("remove(key:)")));
@property (readonly) NSSet<NSString *> *keys __attribute__((swift_name("keys")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface PaymentKitKotlinPair<__covariant A, __covariant B> : PaymentKitBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface PaymentKitKotlinEnumCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol PaymentKitKotlinx_serialization_coreEncoder
@required
- (id<PaymentKitKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<PaymentKitKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<PaymentKitKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<PaymentKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<PaymentKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) PaymentKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol PaymentKitKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<PaymentKitKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<PaymentKitKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) PaymentKitKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol PaymentKitKotlinx_serialization_coreDecoder
@required
- (id<PaymentKitKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<PaymentKitKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (PaymentKitKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<PaymentKitKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<PaymentKitKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) PaymentKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol PaymentKitKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol PaymentKitKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol PaymentKitKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol PaymentKitKotlinKClass <PaymentKitKotlinKDeclarationContainer, PaymentKitKotlinKAnnotatedElement, PaymentKitKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface PaymentKitKotlinx_serialization_jsonJsonElement : PaymentKitBase
@property (class, readonly, getter=companion) PaymentKitKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface PaymentKitKotlinUnit : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinCharProgression")))
@interface PaymentKitKotlinCharProgression : PaymentKitBase <PaymentKitKotlinIterable>
@property (class, readonly, getter=companion) PaymentKitKotlinCharProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (PaymentKitKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) unichar first __attribute__((swift_name("first")));
@property (readonly) unichar last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharRange")))
@interface PaymentKitKotlinCharRange : PaymentKitKotlinCharProgression <PaymentKitKotlinClosedRange, PaymentKitKotlinOpenEndRange>
- (instancetype)initWithStart:(unichar)start endInclusive:(unichar)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKotlinCharRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.7")
 *   kotlin.ExperimentalStdlibApi
*/
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Char type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly, getter=start_) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Components_resourcesResourceReader")))
@interface PaymentKitComponents_resourcesResourceReader : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)resourceReader __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitComponents_resourcesResourceReader *shared __attribute__((swift_name("shared")));
- (NSString *)readResourceName:(NSString *)name __attribute__((swift_name("readResource(name:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol PaymentKitKotlinSequence
@required
- (id<PaymentKitKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol PaymentKitKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol PaymentKitKotlinSuspendFunction1 <PaymentKitKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol PaymentKitKotlinSuspendFunction0 <PaymentKitKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.LockState")))
@interface PaymentKitAtomicfuSynchronizedObjectLockState : PaymentKitBase
- (instancetype)initWithStatus:(PaymentKitAtomicfuSynchronizedObjectStatus *)status nestedLocks:(int32_t)nestedLocks waiters:(int32_t)waiters ownerThreadId:(void * _Nullable)ownerThreadId mutex:(void * _Nullable)mutex __attribute__((swift_name("init(status:nestedLocks:waiters:ownerThreadId:mutex:)"))) __attribute__((objc_designated_initializer));
@property (readonly) void * _Nullable mutex __attribute__((swift_name("mutex")));
@property (readonly) int32_t nestedLocks __attribute__((swift_name("nestedLocks")));
@property (readonly) void * _Nullable ownerThreadId __attribute__((swift_name("ownerThreadId")));
@property (readonly) PaymentKitAtomicfuSynchronizedObjectStatus *status __attribute__((swift_name("status")));
@property (readonly) int32_t waiters __attribute__((swift_name("waiters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinAtomicReference")))
@interface PaymentKitKotlinAtomicReference<T> : PaymentKitBase
- (instancetype)initWithValue:(T _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (BOOL)compareAndSetExpected:(T _Nullable)expected new:(T _Nullable)new_ __attribute__((swift_name("compareAndSet(expected:new:)")));
- (T _Nullable)compareAndSwapExpected:(T _Nullable)expected new:(T _Nullable)new_ __attribute__((swift_name("compareAndSwap(expected:new:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property T _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol PaymentKitKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface PaymentKitKotlinIntIterator : PaymentKitBase <PaymentKitKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PaymentKitInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((swift_name("KotlinLongIterator")))
@interface PaymentKitKotlinLongIterator : PaymentKitBase <PaymentKitKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PaymentKitLong *)next __attribute__((swift_name("next()")));
- (int64_t)nextLong __attribute__((swift_name("nextLong()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface PaymentKitKotlinIntProgressionCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface PaymentKitKotlinIntRangeCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongProgression.Companion")))
@interface PaymentKitKotlinLongProgressionCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinLongProgressionCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKotlinLongProgression *)fromClosedRangeRangeStart:(int64_t)rangeStart rangeEnd:(int64_t)rangeEnd step:(int64_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLongRange.Companion")))
@interface PaymentKitKotlinLongRangeCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinLongRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKotlinLongRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol PaymentKitKotlinx_serialization_coreSerialFormat
@required
@property (readonly) PaymentKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol PaymentKitKotlinx_serialization_coreStringFormat <PaymentKitKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<PaymentKitKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<PaymentKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface PaymentKitKotlinx_serialization_jsonJson : PaymentKitBase <PaymentKitKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) PaymentKitKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<PaymentKitKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(PaymentKitKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<PaymentKitKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (PaymentKitKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<PaymentKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<PaymentKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (PaymentKitKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) PaymentKitKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) PaymentKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface PaymentKitKotlinNothing : PaymentKitBase
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol PaymentKitKotlinSuspendFunction2 <PaymentKitKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction3")))
@protocol PaymentKitKotlinSuspendFunction3 <PaymentKitKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction5")))
@protocol PaymentKitKotlinSuspendFunction5 <PaymentKitKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction4")))
@protocol PaymentKitKotlinSuspendFunction4 <PaymentKitKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:completionHandler:)")));
@end

__attribute__((swift_name("KotlinSuspendFunction6")))
@protocol PaymentKitKotlinSuspendFunction6 <PaymentKitKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 p3:(id _Nullable)p3 p4:(id _Nullable)p4 p5:(id _Nullable)p5 p6:(id _Nullable)p6 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:p3:p4:p5:p6:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface PaymentKitKtor_client_coreHttpRequestData : PaymentKitBase
- (instancetype)initWithUrl:(PaymentKitKtor_httpUrl *)url method:(PaymentKitKtor_httpHttpMethod *)method headers:(id<PaymentKitKtor_httpHeaders>)headers body:(PaymentKitKtor_httpOutgoingContent *)body executionContext:(id<PaymentKitJob>)executionContext attributes:(id<PaymentKitKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<PaymentKitKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PaymentKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PaymentKitKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<PaymentKitJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<PaymentKitKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PaymentKitKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PaymentKitKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface PaymentKitKtor_client_coreHttpResponseData : PaymentKitBase
- (instancetype)initWithStatusCode:(PaymentKitKtor_httpHttpStatusCode *)statusCode requestTime:(PaymentKitKtor_utilsGMTDate *)requestTime headers:(id<PaymentKitKtor_httpHeaders>)headers version:(PaymentKitKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<PaymentKitKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<PaymentKitKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<PaymentKitKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PaymentKitKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PaymentKitKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) PaymentKitKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface PaymentKitKtor_client_coreHttpClientEngineConfig : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property PaymentKitKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol PaymentKitKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface PaymentKitKtor_client_coreHttpClientConfig<T> : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PaymentKitKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(PaymentKitKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<PaymentKitKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(PaymentKitKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(PaymentKitKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol PaymentKitKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(PaymentKitKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(PaymentKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(PaymentKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(PaymentKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(PaymentKitKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey_:(PaymentKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key_:)")));
- (id)takeKey:(PaymentKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(PaymentKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<PaymentKitKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface PaymentKitKtor_eventsEvents : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(PaymentKitKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<PaymentKitDisposableHandle>)subscribeDefinition:(PaymentKitKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(PaymentKitKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface PaymentKitKtor_utilsPipeline<TSubject, TContext> : PaymentKitBase
- (instancetype)initWithPhase:(PaymentKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PaymentKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(PaymentKitKotlinArray<PaymentKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(PaymentKitKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(PaymentKitKtor_utilsPipelinePhase *)reference phase:(PaymentKitKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(PaymentKitKtor_utilsPipelinePhase *)reference phase:(PaymentKitKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(PaymentKitKtor_utilsPipelinePhase *)phase block:(id<PaymentKitKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<PaymentKitKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(PaymentKitKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(PaymentKitKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(PaymentKitKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(PaymentKitKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<PaymentKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<PaymentKitKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface PaymentKitKtor_client_coreHttpReceivePipeline : PaymentKitKtor_utilsPipeline<PaymentKitKtor_client_coreHttpResponse *, PaymentKitKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PaymentKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PaymentKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(PaymentKitKotlinArray<PaymentKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface PaymentKitKtor_client_coreHttpRequestPipeline : PaymentKitKtor_utilsPipeline<id, PaymentKitKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PaymentKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PaymentKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(PaymentKitKotlinArray<PaymentKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface PaymentKitKtor_client_coreHttpResponsePipeline : PaymentKitKtor_utilsPipeline<PaymentKitKtor_client_coreHttpResponseContainer *, PaymentKitKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PaymentKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PaymentKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(PaymentKitKotlinArray<PaymentKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface PaymentKitKtor_client_coreHttpSendPipeline : PaymentKitKtor_utilsPipeline<id, PaymentKitKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(PaymentKitKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<PaymentKitKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(PaymentKitKotlinArray<PaymentKitKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Koin_coreLockable")))
@interface PaymentKitKoin_coreLockable : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Koin_coreInstanceFactory")))
@interface PaymentKitKoin_coreInstanceFactory<T> : PaymentKitKoin_coreLockable
- (instancetype)initWithBeanDefinition:(PaymentKitKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKoin_coreInstanceFactoryCompanion *companion __attribute__((swift_name("companion")));
- (T _Nullable)createContext:(PaymentKitKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(PaymentKitKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(PaymentKitKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(PaymentKitKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@property (readonly) PaymentKitKoin_coreBeanDefinition<T> *beanDefinition __attribute__((swift_name("beanDefinition")));
@end

__attribute__((swift_name("Koin_coreQualifier")))
@protocol PaymentKitKoin_coreQualifier
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScope")))
@interface PaymentKitKoin_coreScope : PaymentKitKoin_coreLockable
- (instancetype)initWithScopeQualifier:(id<PaymentKitKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(PaymentKitKoin_coreKoin *)_koin __attribute__((swift_name("init(scopeQualifier:id:isRoot:_koin:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)close __attribute__((swift_name("close()")));
- (PaymentKitKoin_coreScope *)doCopyScopeQualifier:(id<PaymentKitKoin_coreQualifier>)scopeQualifier id:(NSString *)id isRoot:(BOOL)isRoot _koin:(PaymentKitKoin_coreKoin *)_koin __attribute__((swift_name("doCopy(scopeQualifier:id:isRoot:_koin:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<PaymentKitKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (id _Nullable)getClazz:(id<PaymentKitKotlinKClass>)clazz qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (NSArray<id> *)getAllClazz:(id<PaymentKitKotlinKClass>)clazz __attribute__((swift_name("getAll(clazz:)")));
- (PaymentKitKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
- (id _Nullable)getOrNullClazz:(id<PaymentKitKotlinKClass>)clazz qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (id _Nullable)getPropertyOrNullKey:(NSString *)key __attribute__((swift_name("getPropertyOrNull(key:)")));
- (PaymentKitKoin_coreScope *)getScopeScopeID:(NSString *)scopeID __attribute__((swift_name("getScope(scopeID:)")));
- (id _Nullable)getSource __attribute__((swift_name("getSource()"))) __attribute__((deprecated("No need to use getSource(). You can an use get() directly.")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (id<PaymentKitKotlinLazy>)injectQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier mode:(PaymentKitKotlinLazyThreadSafetyMode *)mode parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<PaymentKitKotlinLazy>)injectOrNullQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier mode:(PaymentKitKotlinLazyThreadSafetyMode *)mode parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (BOOL)isNotClosed __attribute__((swift_name("isNotClosed()")));
- (void)linkToScopes:(PaymentKitKotlinArray<PaymentKitKoin_coreScope *> *)scopes __attribute__((swift_name("linkTo(scopes:)")));
- (void)refreshScopeInstanceClazz:(id<PaymentKitKotlinKClass>)clazz qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier instance:(id)instance __attribute__((swift_name("refreshScopeInstance(clazz:qualifier:instance:)")));
- (void)registerCallbackCallback:(id<PaymentKitKoin_coreScopeCallback>)callback __attribute__((swift_name("registerCallback(callback:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (void)unlinkScopes:(PaymentKitKotlinArray<PaymentKitKoin_coreScope *> *)scopes __attribute__((swift_name("unlink(scopes:)")));
@property (readonly) NSMutableArray<PaymentKitKoin_coreParametersHolder *> *_parameterStack __attribute__((swift_name("_parameterStack")));
@property id _Nullable _source __attribute__((swift_name("_source")));
@property (readonly) BOOL closed __attribute__((swift_name("closed")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isRoot __attribute__((swift_name("isRoot")));
@property (readonly) PaymentKitKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) id<PaymentKitKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((swift_name("Koin_coreParametersHolder")))
@interface PaymentKitKoin_coreParametersHolder : PaymentKitBase
- (instancetype)initWith_values:(NSMutableArray<id> *)_values __attribute__((swift_name("init(_values:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKoin_coreParametersHolderCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitKoin_coreParametersHolder *)addValue:(id)value __attribute__((swift_name("add(value:)")));
- (id _Nullable)component1 __attribute__((swift_name("component1()")));
- (id _Nullable)component2 __attribute__((swift_name("component2()")));
- (id _Nullable)component3 __attribute__((swift_name("component3()")));
- (id _Nullable)component4 __attribute__((swift_name("component4()")));
- (id _Nullable)component5 __attribute__((swift_name("component5()")));
- (id _Nullable)elementAtI:(int32_t)i clazz:(id<PaymentKitKotlinKClass>)clazz __attribute__((swift_name("elementAt(i:clazz:)")));
- (id)get __attribute__((swift_name("get()")));
- (id _Nullable)getI:(int32_t)i __attribute__((swift_name("get(i:)")));
- (id _Nullable)getOrNull __attribute__((swift_name("getOrNull()")));
- (id _Nullable)getOrNullClazz:(id<PaymentKitKotlinKClass>)clazz __attribute__((swift_name("getOrNull(clazz:)")));
- (PaymentKitKoin_coreParametersHolder *)insertIndex:(int32_t)index value:(id)value __attribute__((swift_name("insert(index:value:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (BOOL)isNotEmpty __attribute__((swift_name("isNotEmpty()")));
- (void)setI:(int32_t)i t:(id _Nullable)t __attribute__((swift_name("set(i:t:)")));
- (int32_t)size_ __attribute__((swift_name("size()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<id> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeDSL")))
@interface PaymentKitKoin_coreScopeDSL : PaymentKitBase
- (instancetype)initWithScopeQualifier:(id<PaymentKitKoin_coreQualifier>)scopeQualifier module:(PaymentKitKoin_coreModule *)module __attribute__((swift_name("init(scopeQualifier:module:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitKotlinPair<PaymentKitKoin_coreModule *, PaymentKitKoin_coreInstanceFactory<id> *> *)factoryQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PaymentKitKoin_coreScope *, PaymentKitKoin_coreParametersHolder *))definition __attribute__((swift_name("factory(qualifier:definition:)")));
- (PaymentKitKotlinPair<PaymentKitKoin_coreModule *, PaymentKitKoin_coreInstanceFactory<id> *> *)scopedQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PaymentKitKoin_coreScope *, PaymentKitKoin_coreParametersHolder *))definition __attribute__((swift_name("scoped(qualifier:definition:)")));
- (PaymentKitKotlinPair<PaymentKitKoin_coreModule *, PaymentKitKoin_coreInstanceFactory<id> *> *)singleQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier definition:(id _Nullable (^)(PaymentKitKoin_coreScope *, PaymentKitKoin_coreParametersHolder *))definition __attribute__((swift_name("single(qualifier:definition:)"))) __attribute__((unavailable("Can't use Single in a scope. Use Scoped instead")));
@property (readonly) PaymentKitKoin_coreModule *module __attribute__((swift_name("module")));
@property (readonly) id<PaymentKitKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreSingleInstanceFactory")))
@interface PaymentKitKoin_coreSingleInstanceFactory<T> : PaymentKitKoin_coreInstanceFactory<T>
- (instancetype)initWithBeanDefinition:(PaymentKitKoin_coreBeanDefinition<T> *)beanDefinition __attribute__((swift_name("init(beanDefinition:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)createContext:(PaymentKitKoin_coreInstanceContext *)context __attribute__((swift_name("create(context:)")));
- (void)dropScope:(PaymentKitKoin_coreScope * _Nullable)scope __attribute__((swift_name("drop(scope:)")));
- (void)dropAll __attribute__((swift_name("dropAll()")));
- (T _Nullable)getContext:(PaymentKitKoin_coreInstanceContext *)context __attribute__((swift_name("get(context:)")));
- (BOOL)isCreatedContext:(PaymentKitKoin_coreInstanceContext * _Nullable)context __attribute__((swift_name("isCreated(context:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transaction_dataSessionCache.Companion")))
@interface PaymentKitTransaction_dataSessionCacheCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitTransaction_dataSessionCacheCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_dataRawIdCache.Companion")))
@interface PaymentKitUser_dataRawIdCacheCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitUser_dataRawIdCacheCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User_dataPhoneNumberCache.Companion")))
@interface PaymentKitUser_dataPhoneNumberCacheCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitUser_dataPhoneNumberCacheCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol PaymentKitKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<PaymentKitKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PaymentKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<PaymentKitKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) PaymentKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface PaymentKitKotlinx_serialization_coreSerializersModule : PaymentKitBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<PaymentKitKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PaymentKitKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<PaymentKitKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<PaymentKitKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PaymentKitKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PaymentKitKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<PaymentKitKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<PaymentKitKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol PaymentKitKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface PaymentKitKotlinx_serialization_coreSerialKind : PaymentKitBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol PaymentKitKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<PaymentKitKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PaymentKitKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<PaymentKitKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) PaymentKitKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface PaymentKitKotlinx_serialization_jsonJsonElementCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharProgression.Companion")))
@interface PaymentKitKotlinCharProgressionCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinCharProgressionCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKotlinCharProgression *)fromClosedRangeRangeStart:(unichar)rangeStart rangeEnd:(unichar)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinCharIterator")))
@interface PaymentKitKotlinCharIterator : PaymentKitBase <PaymentKitKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharRange.Companion")))
@interface PaymentKitKotlinCharRangeCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinCharRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKotlinCharRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AtomicfuSynchronizedObject.Status")))
@interface PaymentKitAtomicfuSynchronizedObjectStatus : PaymentKitKotlinEnum<PaymentKitAtomicfuSynchronizedObjectStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PaymentKitAtomicfuSynchronizedObjectStatus *unlocked __attribute__((swift_name("unlocked")));
@property (class, readonly) PaymentKitAtomicfuSynchronizedObjectStatus *thin __attribute__((swift_name("thin")));
@property (class, readonly) PaymentKitAtomicfuSynchronizedObjectStatus *fat __attribute__((swift_name("fat")));
+ (PaymentKitKotlinArray<PaymentKitAtomicfuSynchronizedObjectStatus *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface PaymentKitKotlinx_serialization_jsonJsonDefault : PaymentKitKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface PaymentKitKotlinx_serialization_jsonJsonConfiguration : PaymentKitBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<PaymentKitKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface PaymentKitKtor_httpUrl : PaymentKitBase
@property (class, readonly, getter=companion) PaymentKitKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PaymentKitKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) PaymentKitKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface PaymentKitKtor_httpHttpMethod : PaymentKitBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol PaymentKitKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PaymentKitKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol PaymentKitKtor_httpHeaders <PaymentKitKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface PaymentKitKtor_httpOutgoingContent : PaymentKitBase
- (id _Nullable)getPropertyKey:(PaymentKitKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(PaymentKitKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<PaymentKitKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) PaymentKitLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) PaymentKitKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<PaymentKitKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface PaymentKitKtor_httpHttpStatusCode : PaymentKitBase <PaymentKitKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PaymentKitKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (PaymentKitKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (PaymentKitKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface PaymentKitKtor_utilsGMTDate : PaymentKitBase <PaymentKitKotlinComparable>
@property (class, readonly, getter=companion) PaymentKitKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(PaymentKitKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (PaymentKitKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(PaymentKitKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(PaymentKitKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) PaymentKitKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) PaymentKitKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface PaymentKitKtor_httpHttpProtocolVersion : PaymentKitBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface PaymentKitKtor_client_coreProxyConfig : PaymentKitBase
- (instancetype)initWithUrl:(PaymentKitKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol PaymentKitKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(PaymentKitKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) PaymentKitKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface PaymentKitKtor_utilsAttributeKey<T> : PaymentKitBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface PaymentKitKtor_eventsEventDefinition<T> : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface PaymentKitKtor_utilsPipelinePhase : PaymentKitBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface PaymentKitKtor_client_coreHttpReceivePipelinePhases : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol PaymentKitKtor_httpHttpMessage
@required
@property (readonly) id<PaymentKitKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface PaymentKitKtor_client_coreHttpResponse : PaymentKitBase <PaymentKitKtor_httpHttpMessage, PaymentKitCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<PaymentKitKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) PaymentKitKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) PaymentKitKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) PaymentKitKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface PaymentKitKtor_client_coreHttpRequestPipelinePhases : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol PaymentKitKtor_httpHttpMessageBuilder
@required
@property (readonly) PaymentKitKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface PaymentKitKtor_client_coreHttpRequestBuilder : PaymentKitBase <PaymentKitKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) PaymentKitKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<PaymentKitKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<PaymentKitKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<PaymentKitKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (PaymentKitKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(PaymentKitKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (PaymentKitKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(PaymentKitKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(PaymentKitKtor_httpURLBuilder *, PaymentKitKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<PaymentKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property PaymentKitKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<PaymentKitJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) PaymentKitKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property PaymentKitKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PaymentKitKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface PaymentKitKtor_client_coreHttpResponsePipelinePhases : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface PaymentKitKtor_client_coreHttpResponseContainer : PaymentKitBase
- (instancetype)initWithExpectedType:(PaymentKitKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(PaymentKitKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) PaymentKitKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface PaymentKitKtor_client_coreHttpClientCall : PaymentKitBase <PaymentKitCoroutineScope>
- (instancetype)initWithClient:(PaymentKitKtor_client_coreHttpClient *)client requestData:(PaymentKitKtor_client_coreHttpRequestData *)requestData responseData:(PaymentKitKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(PaymentKitKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(PaymentKitKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(PaymentKitKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<PaymentKitKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<PaymentKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PaymentKitKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<PaymentKitKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<PaymentKitKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property PaymentKitKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface PaymentKitKtor_client_coreHttpSendPipelinePhases : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) PaymentKitKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreBeanDefinition")))
@interface PaymentKitKoin_coreBeanDefinition<T> : PaymentKitBase
- (instancetype)initWithScopeQualifier:(id<PaymentKitKoin_coreQualifier>)scopeQualifier primaryType:(id<PaymentKitKotlinKClass>)primaryType qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(PaymentKitKoin_coreScope *, PaymentKitKoin_coreParametersHolder *))definition kind:(PaymentKitKoin_coreKind *)kind secondaryTypes:(NSArray<id<PaymentKitKotlinKClass>> *)secondaryTypes __attribute__((swift_name("init(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitKoin_coreBeanDefinition<T> *)doCopyScopeQualifier:(id<PaymentKitKoin_coreQualifier>)scopeQualifier primaryType:(id<PaymentKitKotlinKClass>)primaryType qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier definition:(T _Nullable (^)(PaymentKitKoin_coreScope *, PaymentKitKoin_coreParametersHolder *))definition kind:(PaymentKitKoin_coreKind *)kind secondaryTypes:(NSArray<id<PaymentKitKotlinKClass>> *)secondaryTypes __attribute__((swift_name("doCopy(scopeQualifier:primaryType:qualifier:definition:kind:secondaryTypes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasTypeClazz:(id<PaymentKitKotlinKClass>)clazz __attribute__((swift_name("hasType(clazz:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isClazz:(id<PaymentKitKotlinKClass>)clazz qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier scopeDefinition:(id<PaymentKitKoin_coreQualifier>)scopeDefinition __attribute__((swift_name("is(clazz:qualifier:scopeDefinition:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property PaymentKitKoin_coreCallbacks<T> *callbacks __attribute__((swift_name("callbacks")));
@property (readonly) T _Nullable (^definition)(PaymentKitKoin_coreScope *, PaymentKitKoin_coreParametersHolder *) __attribute__((swift_name("definition")));
@property (readonly) PaymentKitKoin_coreKind *kind __attribute__((swift_name("kind")));
@property (readonly) id<PaymentKitKotlinKClass> primaryType __attribute__((swift_name("primaryType")));
@property id<PaymentKitKoin_coreQualifier> _Nullable qualifier __attribute__((swift_name("qualifier")));
@property (readonly) id<PaymentKitKoin_coreQualifier> scopeQualifier __attribute__((swift_name("scopeQualifier")));
@property NSArray<id<PaymentKitKotlinKClass>> *secondaryTypes __attribute__((swift_name("secondaryTypes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceFactoryCompanion")))
@interface PaymentKitKoin_coreInstanceFactoryCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKoin_coreInstanceFactoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *ERROR_SEPARATOR __attribute__((swift_name("ERROR_SEPARATOR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceContext")))
@interface PaymentKitKoin_coreInstanceContext : PaymentKitBase
- (instancetype)initWithKoin:(PaymentKitKoin_coreKoin *)koin scope:(PaymentKitKoin_coreScope *)scope parameters:(PaymentKitKoin_coreParametersHolder * _Nullable)parameters __attribute__((swift_name("init(koin:scope:parameters:)"))) __attribute__((objc_designated_initializer));
@property (readonly) PaymentKitKoin_coreKoin *koin __attribute__((swift_name("koin")));
@property (readonly) PaymentKitKoin_coreParametersHolder * _Nullable parameters __attribute__((swift_name("parameters")));
@property (readonly) PaymentKitKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKoin")))
@interface PaymentKitKoin_coreKoin : PaymentKitBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)close __attribute__((swift_name("close()")));
- (void)createEagerInstances __attribute__((swift_name("createEagerInstances()")));
- (PaymentKitKoin_coreScope *)createScopeT:(id<PaymentKitKoin_coreKoinScopeComponent>)t __attribute__((swift_name("createScope(t:)")));
- (PaymentKitKoin_coreScope *)createScopeScopeId:(NSString *)scopeId __attribute__((swift_name("createScope(scopeId:)")));
- (PaymentKitKoin_coreScope *)createScopeScopeId:(NSString *)scopeId source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:source:)")));
- (PaymentKitKoin_coreScope *)createScopeScopeId:(NSString *)scopeId qualifier:(id<PaymentKitKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("createScope(scopeId:qualifier:source:)")));
- (void)declareInstance:(id _Nullable)instance qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier secondaryTypes:(NSArray<id<PaymentKitKotlinKClass>> *)secondaryTypes allowOverride:(BOOL)allowOverride __attribute__((swift_name("declare(instance:qualifier:secondaryTypes:allowOverride:)")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (void)deleteScopeScopeId:(NSString *)scopeId __attribute__((swift_name("deleteScope(scopeId:)")));
- (id _Nullable)getClazz:(id<PaymentKitKotlinKClass>)clazz qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(clazz:qualifier:parameters:)")));
- (id)getQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("get(qualifier:parameters:)")));
- (NSArray<id> *)getAll __attribute__((swift_name("getAll()")));
- (PaymentKitKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getOrCreateScope(scopeId:)")));
- (PaymentKitKoin_coreScope *)getOrCreateScopeScopeId:(NSString *)scopeId qualifier:(id<PaymentKitKoin_coreQualifier>)qualifier source:(id _Nullable)source __attribute__((swift_name("getOrCreateScope(scopeId:qualifier:source:)")));
- (id _Nullable)getOrNullClazz:(id<PaymentKitKotlinKClass>)clazz qualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(clazz:qualifier:parameters:)")));
- (id _Nullable)getOrNullQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("getOrNull(qualifier:parameters:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (id)getPropertyKey:(NSString *)key defaultValue:(id)defaultValue __attribute__((swift_name("getProperty(key:defaultValue:)")));
- (PaymentKitKoin_coreScope *)getScopeScopeId:(NSString *)scopeId __attribute__((swift_name("getScope(scopeId:)")));
- (PaymentKitKoin_coreScope * _Nullable)getScopeOrNullScopeId:(NSString *)scopeId __attribute__((swift_name("getScopeOrNull(scopeId:)")));
- (id<PaymentKitKotlinLazy>)injectQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier mode:(PaymentKitKotlinLazyThreadSafetyMode *)mode parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("inject(qualifier:mode:parameters:)")));
- (id<PaymentKitKotlinLazy>)injectOrNullQualifier:(id<PaymentKitKoin_coreQualifier> _Nullable)qualifier mode:(PaymentKitKotlinLazyThreadSafetyMode *)mode parameters:(PaymentKitKoin_coreParametersHolder *(^ _Nullable)(void))parameters __attribute__((swift_name("injectOrNull(qualifier:mode:parameters:)")));
- (void)loadModulesModules:(NSArray<PaymentKitKoin_coreModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("loadModules(modules:allowOverride:)")));
- (void)setPropertyKey:(NSString *)key value:(id)value __attribute__((swift_name("setProperty(key:value:)")));
- (void)setupLoggerLogger:(PaymentKitKoin_coreLogger *)logger __attribute__((swift_name("setupLogger(logger:)")));
- (void)unloadModulesModules:(NSArray<PaymentKitKoin_coreModule *> *)modules __attribute__((swift_name("unloadModules(modules:)")));
@property (readonly) PaymentKitKoin_coreInstanceRegistry *instanceRegistry __attribute__((swift_name("instanceRegistry")));
@property (readonly) PaymentKitKoin_coreLogger *logger __attribute__((swift_name("logger")));
@property (readonly) PaymentKitKoin_corePropertyRegistry *propertyRegistry __attribute__((swift_name("propertyRegistry")));
@property (readonly) PaymentKitKoin_coreScopeRegistry *scopeRegistry __attribute__((swift_name("scopeRegistry")));
@end

__attribute__((swift_name("KotlinLazy")))
@protocol PaymentKitKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinLazyThreadSafetyMode")))
@interface PaymentKitKotlinLazyThreadSafetyMode : PaymentKitKotlinEnum<PaymentKitKotlinLazyThreadSafetyMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PaymentKitKotlinLazyThreadSafetyMode *synchronized __attribute__((swift_name("synchronized")));
@property (class, readonly) PaymentKitKotlinLazyThreadSafetyMode *publication __attribute__((swift_name("publication")));
@property (class, readonly) PaymentKitKotlinLazyThreadSafetyMode *none __attribute__((swift_name("none")));
+ (PaymentKitKotlinArray<PaymentKitKotlinLazyThreadSafetyMode *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("Koin_coreScopeCallback")))
@protocol PaymentKitKoin_coreScopeCallback
@required
- (void)onScopeCloseScope:(PaymentKitKoin_coreScope *)scope __attribute__((swift_name("onScopeClose(scope:)")));
@end

__attribute__((swift_name("Koin_coreLogger")))
@interface PaymentKitKoin_coreLogger : PaymentKitBase
- (instancetype)initWithLevel:(PaymentKitKoin_coreLevel *)level __attribute__((swift_name("init(level:)"))) __attribute__((objc_designated_initializer));
- (void)debugMsg:(NSString *)msg __attribute__((swift_name("debug(msg:)")));
- (void)errorMsg:(NSString *)msg __attribute__((swift_name("error(msg:)")));
- (void)infoMsg:(NSString *)msg __attribute__((swift_name("info(msg:)")));
- (BOOL)isAtLvl:(PaymentKitKoin_coreLevel *)lvl __attribute__((swift_name("isAt(lvl:)")));
- (void)logLvl:(PaymentKitKoin_coreLevel *)lvl msg:(NSString *(^)(void))msg __attribute__((swift_name("log(lvl:msg:)")));
- (void)logLevel:(PaymentKitKoin_coreLevel *)level msg:(NSString *)msg __attribute__((swift_name("log(level:msg:)")));
@property PaymentKitKoin_coreLevel *level __attribute__((swift_name("level")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreParametersHolder.Companion")))
@interface PaymentKitKoin_coreParametersHolderCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKoin_coreParametersHolderCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t MAX_PARAMS __attribute__((swift_name("MAX_PARAMS")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol PaymentKitKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<PaymentKitKotlinKClass>)kClass provider:(id<PaymentKitKotlinx_serialization_coreKSerializer> (^)(NSArray<id<PaymentKitKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<PaymentKitKotlinKClass>)kClass serializer:(id<PaymentKitKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<PaymentKitKotlinKClass>)baseClass actualClass:(id<PaymentKitKotlinKClass>)actualClass actualSerializer:(id<PaymentKitKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<PaymentKitKotlinKClass>)baseClass defaultDeserializerProvider:(id<PaymentKitKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<PaymentKitKotlinKClass>)baseClass defaultDeserializerProvider:(id<PaymentKitKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<PaymentKitKotlinKClass>)baseClass defaultSerializerProvider:(id<PaymentKitKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol PaymentKitKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<PaymentKitKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface PaymentKitKtor_httpUrlCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol PaymentKitKtor_httpParameters <PaymentKitKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface PaymentKitKtor_httpURLProtocol : PaymentKitBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface PaymentKitKtor_httpHttpMethodCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<PaymentKitKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) PaymentKitKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) PaymentKitKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) PaymentKitKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) PaymentKitKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) PaymentKitKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) PaymentKitKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) PaymentKitKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol PaymentKitKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface PaymentKitKtor_httpHeaderValueWithParameters : PaymentKitBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PaymentKitKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<PaymentKitKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface PaymentKitKtor_httpContentType : PaymentKitKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<PaymentKitKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<PaymentKitKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(PaymentKitKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (PaymentKitKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (PaymentKitKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface PaymentKitKtor_httpHttpStatusCodeCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) PaymentKitKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<PaymentKitKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface PaymentKitKtor_utilsGMTDateCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface PaymentKitKtor_utilsWeekDay : PaymentKitKotlinEnum<PaymentKitKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentKitKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) PaymentKitKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) PaymentKitKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) PaymentKitKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) PaymentKitKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) PaymentKitKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) PaymentKitKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (PaymentKitKotlinArray<PaymentKitKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface PaymentKitKtor_utilsMonth : PaymentKitKotlinEnum<PaymentKitKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) PaymentKitKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) PaymentKitKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) PaymentKitKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) PaymentKitKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) PaymentKitKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) PaymentKitKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) PaymentKitKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) PaymentKitKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) PaymentKitKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) PaymentKitKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) PaymentKitKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) PaymentKitKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (PaymentKitKotlinArray<PaymentKitKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface PaymentKitKtor_httpHttpProtocolVersionCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (PaymentKitKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PaymentKitKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) PaymentKitKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) PaymentKitKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) PaymentKitKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) PaymentKitKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol PaymentKitKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(PaymentKitKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(PaymentKitLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(PaymentKitKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(PaymentKitLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PaymentKitKtor_ioChunkBuffer *)dst completionHandler:(void (^)(PaymentKitInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(PaymentKitKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(PaymentKitInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(PaymentKitKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(PaymentKitInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(PaymentKitInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(PaymentKitBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(PaymentKitByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(PaymentKitDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(PaymentKitFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PaymentKitKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(PaymentKitKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(PaymentKitInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(PaymentKitLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(PaymentKitKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(PaymentKitKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<PaymentKitKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(PaymentKitShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<PaymentKitKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<PaymentKitKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(PaymentKitBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) PaymentKitKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol PaymentKitKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PaymentKitKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PaymentKitKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PaymentKitKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PaymentKitKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface PaymentKitKtor_utilsStringValuesBuilderImpl : PaymentKitBase <PaymentKitKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<PaymentKitKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<PaymentKitKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<PaymentKitKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<PaymentKitKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty_ __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) PaymentKitMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface PaymentKitKtor_httpHeadersBuilder : PaymentKitKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<PaymentKitKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface PaymentKitKtor_client_coreHttpRequestBuilderCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface PaymentKitKtor_httpURLBuilder : PaymentKitBase
- (instancetype)initWithProtocol:(PaymentKitKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<PaymentKitKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<PaymentKitKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<PaymentKitKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property PaymentKitKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface PaymentKitKtor_utilsTypeInfo : PaymentKitBase
- (instancetype)initWithType:(id<PaymentKitKotlinKClass>)type reifiedType:(id<PaymentKitKotlinKType>)reifiedType kotlinType:(id<PaymentKitKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitKtor_utilsTypeInfo *)doCopyType:(id<PaymentKitKotlinKClass>)type reifiedType:(id<PaymentKitKotlinKType>)reifiedType kotlinType:(id<PaymentKitKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PaymentKitKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<PaymentKitKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<PaymentKitKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface PaymentKitKtor_client_coreHttpClientCallCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol PaymentKitKtor_client_coreHttpRequest <PaymentKitKtor_httpHttpMessage, PaymentKitCoroutineScope>
@required
@property (readonly) id<PaymentKitKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) PaymentKitKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) PaymentKitKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) PaymentKitKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) PaymentKitKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreKind")))
@interface PaymentKitKoin_coreKind : PaymentKitKotlinEnum<PaymentKitKoin_coreKind *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PaymentKitKoin_coreKind *singleton __attribute__((swift_name("singleton")));
@property (class, readonly) PaymentKitKoin_coreKind *factory __attribute__((swift_name("factory")));
@property (class, readonly) PaymentKitKoin_coreKind *scoped __attribute__((swift_name("scoped")));
+ (PaymentKitKotlinArray<PaymentKitKoin_coreKind *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreCallbacks")))
@interface PaymentKitKoin_coreCallbacks<T> : PaymentKitBase
- (instancetype)initWithOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("init(onClose:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitKoin_coreCallbacks<T> *)doCopyOnClose:(void (^ _Nullable)(T _Nullable))onClose __attribute__((swift_name("doCopy(onClose:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) void (^ _Nullable onClose)(T _Nullable) __attribute__((swift_name("onClose")));
@end

__attribute__((swift_name("Koin_coreKoinComponent")))
@protocol PaymentKitKoin_coreKoinComponent
@required
- (PaymentKitKoin_coreKoin *)getKoin __attribute__((swift_name("getKoin()")));
@end

__attribute__((swift_name("Koin_coreKoinScopeComponent")))
@protocol PaymentKitKoin_coreKoinScopeComponent <PaymentKitKoin_coreKoinComponent>
@required
- (void)closeScope __attribute__((swift_name("closeScope()")));
@property (readonly) PaymentKitKoin_coreScope *scope __attribute__((swift_name("scope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreInstanceRegistry")))
@interface PaymentKitKoin_coreInstanceRegistry : PaymentKitBase
- (instancetype)initWith_koin:(PaymentKitKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)saveMappingAllowOverride:(BOOL)allowOverride mapping:(NSString *)mapping factory:(PaymentKitKoin_coreInstanceFactory<id> *)factory logWarning:(BOOL)logWarning __attribute__((swift_name("saveMapping(allowOverride:mapping:factory:logWarning:)")));
- (int32_t)size __attribute__((swift_name("size()")));
@property (readonly) PaymentKitKoin_coreKoin *_koin __attribute__((swift_name("_koin")));
@property (readonly) NSDictionary<NSString *, PaymentKitKoin_coreInstanceFactory<id> *> *instances __attribute__((swift_name("instances")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_corePropertyRegistry")))
@interface PaymentKitKoin_corePropertyRegistry : PaymentKitBase
- (instancetype)initWith_koin:(PaymentKitKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (void)deletePropertyKey:(NSString *)key __attribute__((swift_name("deleteProperty(key:)")));
- (id _Nullable)getPropertyKey:(NSString *)key __attribute__((swift_name("getProperty(key:)")));
- (void)savePropertiesProperties:(NSDictionary<NSString *, id> *)properties __attribute__((swift_name("saveProperties(properties:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry")))
@interface PaymentKitKoin_coreScopeRegistry : PaymentKitBase
- (instancetype)initWith_koin:(PaymentKitKoin_coreKoin *)_koin __attribute__((swift_name("init(_koin:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKoin_coreScopeRegistryCompanion *companion __attribute__((swift_name("companion")));
- (void)loadScopesModules:(NSSet<PaymentKitKoin_coreModule *> *)modules __attribute__((swift_name("loadScopes(modules:)")));
@property (readonly) PaymentKitKoin_coreScope *rootScope __attribute__((swift_name("rootScope")));
@property (readonly) NSSet<id<PaymentKitKoin_coreQualifier>> *scopeDefinitions __attribute__((swift_name("scopeDefinitions")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreLevel")))
@interface PaymentKitKoin_coreLevel : PaymentKitKotlinEnum<PaymentKitKoin_coreLevel *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PaymentKitKoin_coreLevel *debug __attribute__((swift_name("debug")));
@property (class, readonly) PaymentKitKoin_coreLevel *info __attribute__((swift_name("info")));
@property (class, readonly) PaymentKitKoin_coreLevel *error __attribute__((swift_name("error")));
@property (class, readonly) PaymentKitKoin_coreLevel *none __attribute__((swift_name("none")));
+ (PaymentKitKotlinArray<PaymentKitKoin_coreLevel *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface PaymentKitKtor_httpURLProtocolCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) PaymentKitKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) PaymentKitKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) PaymentKitKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) PaymentKitKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) PaymentKitKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, PaymentKitKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface PaymentKitKtor_httpHeaderValueParam : PaymentKitBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (PaymentKitKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface PaymentKitKtor_httpHeaderValueWithParametersCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<PaymentKitKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface PaymentKitKtor_httpContentTypeCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) PaymentKitKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface PaymentKitKtor_utilsWeekDayCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PaymentKitKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface PaymentKitKtor_utilsMonthCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (PaymentKitKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (PaymentKitKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface PaymentKitKtor_ioMemory : PaymentKitBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(PaymentKitKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(PaymentKitKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (PaymentKitKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (PaymentKitKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface PaymentKitKtor_ioBuffer : PaymentKitBase
- (instancetype)initWithMemory:(PaymentKitKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (PaymentKitKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(PaymentKitKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) PaymentKitKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface PaymentKitKtor_ioChunkBuffer : PaymentKitKtor_ioBuffer
- (instancetype)initWithMemory:(PaymentKitKtor_ioMemory *)memory origin:(PaymentKitKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<PaymentKitKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(PaymentKitKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (PaymentKitKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<PaymentKitKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) PaymentKitKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) PaymentKitKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface PaymentKitKotlinByteArray : PaymentKitBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(PaymentKitByte *(^)(PaymentKitInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (PaymentKitKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface PaymentKitKtor_ioInput : PaymentKitBase <PaymentKitKtor_ioCloseable>
- (instancetype)initWithHead:(PaymentKitKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PaymentKitKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(PaymentKitKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(PaymentKitKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(PaymentKitKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<PaymentKitKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<PaymentKitKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<PaymentKitKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface PaymentKitKtor_ioByteReadPacket : PaymentKitKtor_ioInput
- (instancetype)initWithHead:(PaymentKitKtor_ioChunkBuffer *)head pool:(id<PaymentKitKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(PaymentKitKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<PaymentKitKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) PaymentKitKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (PaymentKitKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (PaymentKitKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(PaymentKitKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol PaymentKitKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (PaymentKitKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol PaymentKitKotlinAppendable
@required
- (id<PaymentKitKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<PaymentKitKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<PaymentKitKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface PaymentKitKtor_httpURLBuilderCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol PaymentKitKtor_httpParametersBuilder <PaymentKitKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((swift_name("KotlinKType")))
@protocol PaymentKitKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<PaymentKitKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<PaymentKitKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Koin_coreScopeRegistry.Companion")))
@interface PaymentKitKoin_coreScopeRegistryCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKoin_coreScopeRegistryCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface PaymentKitKtor_ioMemoryCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface PaymentKitKtor_ioBufferCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol PaymentKitKtor_ioObjectPool <PaymentKitKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface PaymentKitKtor_ioChunkBufferCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<PaymentKitKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<PaymentKitKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface PaymentKitKotlinByteIterator : PaymentKitBase <PaymentKitKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (PaymentKitByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface PaymentKitKtor_ioInputCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface PaymentKitKtor_ioByteReadPacketCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) PaymentKitKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface PaymentKitKotlinKTypeProjection : PaymentKitBase
- (instancetype)initWithVariance:(PaymentKitKotlinKVariance * _Nullable)variance type:(id<PaymentKitKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) PaymentKitKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (PaymentKitKotlinKTypeProjection *)doCopyVariance:(PaymentKitKotlinKVariance * _Nullable)variance type:(id<PaymentKitKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<PaymentKitKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) PaymentKitKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface PaymentKitKotlinKVariance : PaymentKitKotlinEnum<PaymentKitKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) PaymentKitKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) PaymentKitKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) PaymentKitKotlinKVariance *out __attribute__((swift_name("out")));
+ (PaymentKitKotlinArray<PaymentKitKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface PaymentKitKotlinKTypeProjectionCompanion : PaymentKitBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) PaymentKitKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PaymentKitKotlinKTypeProjection *)contravariantType:(id<PaymentKitKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PaymentKitKotlinKTypeProjection *)covariantType:(id<PaymentKitKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (PaymentKitKotlinKTypeProjection *)invariantType:(id<PaymentKitKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) PaymentKitKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
